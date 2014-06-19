/*
 * hexagono.cpp
 *
 *  Created on: 03/06/2014
 *      Author: alessandro
 */

#include "hexagono.h"

hexagono::hexagono(float lado):FormaBiDimensional("Hexagono"),lado(lado),sqrt3(1.73205080757){}

hexagono::~hexagono(){}

float hexagono::perimetro(){
	return 6*lado;
}

float hexagono::area(){
	return 1.5*lado*lado*sqrt3;
}