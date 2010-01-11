/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * neurds
 * Copyright (C)  2009 <>
 *
 * neurds is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * neurds is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Neurone.h"
#include "Seuil_function.h"

//Accesseurs SET :
void Neurone::setIN(float IN) {
    this->IN = IN;
}
void Neurone::setW_0(float w_0) {
    this->w_0=w_0 ;
}
void Neurone::setNetEntries(vector<Net* > NetEntries){
    this->NetEntries=NetEntries ;
}
void Neurone::setNetOutputs(vector<Net* > NetOutputs) {
    this->NetOutputs=NetOutputs ;
}
void Neurone::setSeuilFunction(float (*p)(float)){
this->seuil_function = p ;


}

void Neurone::setSeuilDerivatedFunction(float (*p)(float)){
this->seuil_derivated_function = p ;


}

void Neurone::setHidden(bool value){
    this->hidden = value;
}
//Accesseurs GET :
float Neurone::getIN(void) {
    return this->IN ;
}
float Neurone::getW_0(void) {
    return this->w_0 ;
}
vector<Net*> Neurone::getNetEntries(void) {
    return this->NetEntries ;
}
vector<Net*> Neurone::getNetOutputs(void) {
    return this->NetOutputs ;
}

bool Neurone::getHidden(){
    return this->hidden;

}
//Constructeurs
Neurone::Neurone(){
	seuil_function = Seuil_Heavside;
        this->setHidden(true);
}


//Net Methods
//Entry
void Neurone::AddNetEntry(Net * a){
this->NetEntries.push_back(a);

}

void Neurone::DelNetEntry(unsigned int index){

 this->NetEntries.erase(this->NetEntries.begin()+index);
}

//Outputs
void Neurone::AddNetOutput(Net * a){
this->NetOutputs.push_back(a);

}


void Neurone::DelNetOutput(unsigned int index){

 this->NetOutputs.erase(this->NetOutputs.begin()+index);
}


void Neurone::DisplayState(){

	cout << " === Neuronal Structure === " << endl;
	cout << " ==== Entries ====" << endl;

	for (unsigned int i = 0; i< this->NetEntries.size(); i++){
		cout << "Weight : " << this->NetEntries.at(i)->getWeight() << endl;
		cout << "Value : " << this->NetEntries.at(i)->getValue() << endl;

	}
	cout << " ==== Output ===" << endl;

	for (unsigned int i =0;i< this->NetOutputs.size();i++){

		cout << "Weight : " << this->NetOutputs.at(i)->getWeight() << endl;
		cout << "Value : " << this->NetOutputs.at(i)->getValue() << endl;





	}
}


void Neurone::setupTruth(Truth example){
//Add entry to input Nets
	for (unsigned int i=0; i< this->getNetEntries().size();i++){

	this->getNetEntries ().at(i)->setValue(example.getEntries().at(i));

	}

}

float Neurone::OutputWithCurrentNet(){
	this->INWithCurrentNet ();      // à la fin, on réaffecte la valeur de IN : setIN
float S = this->seuil_function(this->getIN());
//Apply value to all output NETS

	for (unsigned int i =0; i < this->getNetOutputs ().size();i++){
	this->getNetOutputs ().at(i)->setValue(S);


	}


	return S;
}

float Neurone::INWithCurrentNet(){
float S = 0;

	for (unsigned int i =0; i< this->getNetEntries ().size();i++){

        S+=this->getNetEntries ().at(i)->getValue()*this->getNetEntries ().at(i)->getWeight();


	}
	S -= this->getW_0() ;

	this->setIN (S);
	return S;

}
//Apprentissage
float Neurone::LearnGradient(vector<Truth> table,float learningRate){

vector<float> temp_value(this->getNetEntries().size(),0);
float error = 0;

for (unsigned int i =0; i < table.size(); i++){
    //on prends l'entrée de l'exemple et on l'applique
    this->setupTruth(table.at(i));
    float in = this->INWithCurrentNet();
    float Sk = this->OutputWithCurrentNet();
    error += 0.5*(table.at(i).getOutput() - Sk)*(table.at(i).getOutput() - Sk);

    //On calcule le coefficient de correction
    for (unsigned int j = 0;j < this->getNetEntries().size();j++){

   // temp_value.at(j)+= -1*learningRate*(-(table.at(i).getOutput()-Sk)*this->seuil_derivated_function(in)*table.at(i).getEntries().at(j));
    temp_value.at(j)+= learningRate*((table.at(i).getOutput()-Sk)*this->seuil_derivated_function(in)*table.at(i).getEntries().at(j));



    }


        }

        //On met à jour tous les poids
for (unsigned int k = 0; k < temp_value.size();k++){
float modif = this->getNetEntries().at(k)->getWeight() + temp_value.at(k);
this->getNetEntries().at(k)->setWeight(modif);

}
return error;
}

float Neurone::LearnWidrowHoff(vector<Truth> table, float learningRate){
float error = 0;
float temp = 0;

//pour chacun des exemples
for (unsigned int i = 0; i < table.size(); i++){
    //On prends l'entrée de l'exemple et on l'applique
    this->setupTruth(table.at(i));
    float Sk = this->OutputWithCurrentNet();
    //cout << "Sk " << Sk << endl;
    //Une fois la sortie calculé, on ajuste le correcteur pour chaque poids

    for (unsigned int j = 0; j < this->getNetEntries().size();j++){

        temp =-1*learningRate*(table.at(i).getOutput() - Sk)*(table.at(i).getOutput() - Sk)*table.at(i).getEntries().at(j);
        this->getNetEntries().at(j)->setWeight(temp);




    }
//on calcule l'erreur
 error+=(table.at(i).getOutput() - Sk)*(table.at(i).getOutput() - Sk);
//cout << "Carré : "<< (table.at(i).getOutput() - Sk)*(table.at(i).getOutput() - Sk) << endl;

}

//On applique les correcteurs

error*=0.5;
cout << "Erreur : " << error << endl;
return error;

}
