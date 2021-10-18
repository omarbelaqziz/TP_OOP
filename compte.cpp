#include "compte.h"

bool compte::retirerArgent(double montant)
{
    if (montant <= this->solde) {
        this->solde -= montant;
        return true;
    }
    return false;
}

void compte::deposerArgent(double montant)
{
    this->solde += montant;
}

bool compte::transfererArgent(compte dest, double montant)
{
    if (this->retirerArgent(montant))
    {
        dest.deposerArgent(montant);
        return true;
    }
    else return false;
}

double compte::condulterSolde() const
{
    return this->solde;
}
