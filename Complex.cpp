#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;
Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;
}
void Complex::affichage()
{
	cout << this->re << " + " << this->img << "i\n";
}

double Complex::module()
{
	return sqrt(pow(this->re,2) + pow(this->img, 2));
}

Complex Complex::conjuge()
{
	return Complex(this->re,-this->img);
}
