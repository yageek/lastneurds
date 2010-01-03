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

#ifndef _NETWORK_H_
#define _NETWORK_H_

#include<iostream>
#include<vector>
#include "Layer.h"

using namespace std;
class Network
{
private:	
	vector<Layer *> Layers;

	public:
	void setLayers(vector<Layer *> Layers);
	vector<Layer * > getLayers();

};

#endif // _NETWORK_H_
