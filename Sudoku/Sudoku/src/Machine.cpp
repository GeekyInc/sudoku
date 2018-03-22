#include "Machine.h"

Machine::Machine()
{
    //ctor
}

Machine::~Machine()
{
    //dtor
}

Machine::Machine(const Machine& other)
{
    //copy ctor
}

Machine& Machine::operator=(const Machine& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
