// OOP_TP1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Complex.h"
#include "pointEtCercle.h"
#include <iostream>

using namespace std;

int main()
{
//------------- EXERCICE 1
    Complex* z3 = new Complex();
    cout << sizeof(z3) << endl;
    Complex z1(5, 4);
    Complex z2(z1); // constructeur de recopie
    z1.affichage();
    z2.affichage();
    cout << "le module de Z1 est : " << z1.module() << endl;
    cout << "le conjuge de Z1 est : "; z1.conjuge().affichage();
    cout << endl << endl;


//------------- EXERCICE 2
    cercle c(1, 3, 4);
    c.affiche();
    cout << "la surface du cercle est  : " << c.surface() << endl;
    cout << "le perimetre du cercle est  : " << c.perimetre() << endl;

}
