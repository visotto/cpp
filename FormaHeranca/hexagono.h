/*
 * hexagono.h
 *
 *  Created on: 03/06/2014
 *      Author: alessandro
 */

#ifndef HEX_H
#define HEX_H

#include "FormaBiDimensional.h"

class hexagono: public FormaBiDimensional{
	public:
		hexagono(float lado = 0);
		virtual ~hexagono();
		virtual float perimetro();
		virtual float area();
	private:
		const float lado; //tamanho do lado do hexagono 
		const float sqrt3; //valor da raiz de 3
};


#endif