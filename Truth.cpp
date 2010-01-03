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

#include "Truth.h"
//Accesseurs GET
float Truth::getOutput(){
return this->output;

}

vector<float> Truth::getEntries(){
return this->Entries;

}


//Accesseurs SET
void Truth::setOutput(float value){
	this->output = value;

}

void Truth::setEntries(vector<float> Entries){

this->Entries = Entries;
}

//Constructeurs
Truth::Truth(){


}

Truth::Truth(vector<float> Entries, float output){
this->setEntries (Entries);
	this->setOutput (output);

}

void Truth::Clear(){
this->Entries.clear();
	this->setOutput (0);
	


}


void Truth::Display(){

	cout << " Truth with S="<< this->getOutput() << endl;
	for (unsigned int i = 0; i < this->getEntries ().size() ; i++){
	cout << "\t Entry Value => " << this->getEntries ().at(i) << endl;


	}


}