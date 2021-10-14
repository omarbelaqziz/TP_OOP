#include "pointEtCercle.h"
#include <iostream>
#include <math.h>
using namespace std;
point::point(double X, double Y)
{
	this->X = X;
	this->Y = Y;
}

double point::consulterX()
{
	return this->X;
}

double point::consulterY()
{
	return this->Y;
}

cercle::cercle(double X, double Y, double r)
{
	this->rayon = r;
	this->centre = new point(X, Y);
}

cercle::~cercle()
{
	delete this->centre;
}

void cercle::affiche()
{
	cout << "l'emplacemet du centre: \n";
	cout << "X : " << this->centre->consulterX() << endl;
	cout << "Y : " << this->centre->consulterY() << endl;
	cout << "le rayon est: " << this->rayon << endl;
}

double cercle::surface()
{
	
	return pow(this->rayon,2) * 3.14159;
}

double cercle::perimetre()
{
	return this->rayon * 2 * 3.14159;
}
