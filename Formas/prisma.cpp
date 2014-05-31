#include "prisma.h"

prisma::prisma(float lBase, float altura):FormaTriDimensional("Prisma"),altura(altura),lBase(lBase),base(triangulo(lBase,lBase,lBase)){}

prisma::~prisma(){}

float prisma::area(){
	float areaBase = base.area();
	return 2*areaBase+3*altura*lBase;
}
float prisma::volume (){
	return base.area()*altura;
}