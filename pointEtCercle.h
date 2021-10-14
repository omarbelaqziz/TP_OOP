#pragma once

class point
{
//------- attributs
private:
	double X;
	double Y;

//------- methodes
public:
	point(double X = 0.0, double Y = 0.0);
	double consulterX();
	double consulterY();

};

class cercle 
{
//------- attributs
private:
	point *centre;
	double rayon;

//------- methodes
public:
	cercle(double X = 0.0 ,double Y = 0.0,double r = 0.0);
	~cercle();
	void affiche();
	double surface();
	double perimetre();
};
