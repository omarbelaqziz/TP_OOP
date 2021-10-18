#pragma once

class compte {
	//------- attributs

private:
	int numCompte;
	char nomProprietaire[26];
	double solde;

	//------- methodes

private:
	bool retirerArgent(double montant);
	void deposerArgent(double montant);
	bool transfererArgent(compte dest, double montant);
public:
	double condulterSolde() const;


};