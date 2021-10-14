#pragma once

class Complex
{
//------- attributs

private:
	double re;
	double img;


//------- methodes

public:
	Complex(double re = 0.0, double img = 0.0);
	void affichage();
	double module();
	Complex conjuge();
};
