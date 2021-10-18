#pragma once
class Complex
{
//------- attributs

private:
	double re;
	double img;
	int* tab;
	static int comp;

//------- methodes

public:
	Complex(double re = 0.0, double img = 0.0);
	Complex(const Complex &z);
	Complex& operator=(const Complex& z);
	void affichage() const;
	double module() const;
	Complex conjuge() const;
};
