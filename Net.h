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

#ifndef _NET_H_
#define _NET_H_

#include "Neurone.h"
#include<iostream>
#include<vector>

class Net {

private :
//Attribut
    float value;
    float weight;
    Neurone *entry;
    Neurone *output;
public :

	//Constructeurs
	Net();
	Net(Neurone *entry,Neurone * output);

	//Destructeurs
	~Net();
	//Accesseurs GET
	float getValue();
	float getWeight();
	Neurone * getEntry();
	Neurone * getOutput();

	//Accesseurs SET
	void setValue(float value);
	void setWeight(float weight);
	void setEntry(Neurone *entry);
	void setOutput(Neurone * output);
	

	//Functions +
	void Link(Neurone * entry,Neurone *output);
	
	

};

#else // Pour autoriser la double inclusion de fichiers
class Net;

#endif // _NET_H_
