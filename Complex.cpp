#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;
Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;
}
Complex::Complex(const Complex& z)
{
	this->re = z.re;
	this->img = z.img;
	this->tab = new int[3];

	//for
}
Complex& Complex::operator=(const Complex& z)
{
	return Complex();
}
void Complex::affichage() const
{
	// this->re =5 erreur
	cout << this->re << " + " << this->img << "i\n";
}

double Complex::module() const
{
	return sqrt(pow(this->re,2) + pow(this->img, 2));
}

Complex Complex::conjuge() const
{
	return Complex(this->re,-this->img);
}
