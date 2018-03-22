#include "Personne.h"

Personne::Personne()
{
    //ctor
}

Personne::~Personne()
{
    //dtor
}

Personne::Personne(const Personne& other)
{
    //copy ctor
}

Personne& Personne::operator=(const Personne& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
