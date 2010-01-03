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

#include "Net.h"


//Constructeurs

Net::Net(){

this->setEntry (NULL);
this->setOutput (NULL);
this->setValue (0);
this->setWeight (0);

}

Net::Net(Neurone *entry,Neurone *output){

this->Link(entry,output);
}
float Net::getValue(){

	return this->value;
	

}

float Net::getWeight(){
	return this->weight;

}

Neurone * Net::getEntry(){
return this->entry;
}

Neurone * Net::getOutput(){
return this->output;
}

//Accesseurs SET

void Net::setValue(float value){
this->value = value;

}

void Net::setWeight(float weight){

	this->weight = weight;
}

void Net::setEntry(Neurone *A){

	this->entry = A;
}

void Net::setOutput(Neurone *B){
this->output = B;
}


//Functions plus

void Net::Link(Neurone *entry, Neurone *output){
	this->setEntry (entry); //Net Neuronal
	this->setOutput (output);

	if(output!=NULL) output->AddNetEntry(this);
	if(entry!=NULL) entry->AddNetOutput(this);

}
