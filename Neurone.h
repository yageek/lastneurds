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

#ifndef _NEURONE_H_
#define _NEURONE_H_
#include<iostream>
#include<vector>
#include<string>
#include "Net.h"
#include "Truth.h"



using namespace std;

class Neurone {
    //Attribut de la classe Neurone
    private :
        bool hidden;
        float IN;                   // Valeur du Neurone
        float w_0;                  // Seuil
        vector<Net *> NetEntries;   // Valeurs des entrées
        vector<Net *> NetOutputs;   // Valeur de la sortie
		float (*seuil_function) (float);//pointeur de fonctions seuils
		float (*seuil_derivated_function) (float);//pointeur de fonctions seuils

    public:
		//Constructeurs

	Neurone();
    //Accesseurs SET
        void setIN(float IN);
        void setW_0(float w_0);
        void setNetEntries(vector<Net* > NetEntries);
        void setNetOutputs(vector<Net* > NetOutputs);
		void setSeuilFunction(float (*p)(float));
		void setSeuilDerivatedFunction(float (*p)(float));
               void setHidden(bool value);
    //Accesseurs GET
        float getIN(void);
        float getW_0(void);
        vector<Net*> getNetEntries(void);
        vector<Net*> getNetOutputs(void);
        bool getHidden();

	//Net Methods
		//Entry
		void AddNetEntry(Net * net);
		void DelNetEntry(unsigned int index);
		//Output
		void AddNetOutput(Net *net);
		void DelNetOutput(unsigned int index);
	//Learning methods


	////Algorithms
	float LearnGradient(vector<Truth> table,float learningRate);
	float LearnWidrowHoff(vector<Truth> table,float learningRate);
	////Connexions and relations
	void setupTruth(Truth example);
	float INWithCurrentNet();
	float OutputWithCurrentNet();
	//Afficher Neurone
	void DisplayState();


};
#else
class Neurone;

#endif // _NEURONE_H_
