/*
 * prisma.h
 *
 *  Created on: 03/06/2014
 *      Author: alessandro
 */

#ifndef PRISMA_H
#define PRISMA_H

#include "triangulo.h"
#include "FormaTriDimensional.h"

class prisma : public FormaTriDimensional{
	public:
		prisma(float lBase = 0, float altura = 0);
		virtual ~prisma();
		virtual float area();
		virtual float volume ();
	private:
		triangulo base;
		float altura;
		float lBase;
};
#endif