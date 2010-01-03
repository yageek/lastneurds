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

#ifndef _TRUTH_H_
#define _TRUTH_H_

#include<iostream>
#include<vector>
using namespace std;
class Truth{


private:
	vector<float> Entries;
	float output;

public:
		//Constructeur
		Truth();
		Truth(vector<float> Entries, float output);

		//Accesseur GET
		vector<float> getEntries();
		float getOutput();

		//Accesseur SET
		void setEntries(vector<float> Entries);
		void setOutput(float value);

		//Clear
		void Clear();

		//Display
		void Display();
};

#endif // _TRUTH_H_
