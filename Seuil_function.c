/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor Boston, MA 02110-1301,  USA
 */
#include<math.h>
#include<stdlib.h>
 float Seuil_Heavside(float in){
if (in >= 0) return 1.0; else return 0.0;


 }
 float Linear(float in){

     return in;
 }
 float DerivatedLinear(float in){

     return 1;
 }
float Seuil_Sigmoide(float in){
return 1/(1+exp(-1*in));


}

float TangenteH(float in){

return tanh(in);

}

float DerivatedTangenteH(float in){

 return (1- TangenteH(in)*TangenteH(in)  );

}
int hasard(int min, int max){
return (int) (min + ((float) rand() / RAND_MAX * (max - min + 1)));
}
