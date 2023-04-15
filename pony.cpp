#include "pony.h"

Pony::Pony()
{

}

void Pony::setzePos(const Position &newOrt)
{
    ort = newOrt;
}

int Pony::gibGeburtsjahr() const
{
    return geburtsJahr;
}

std::string Pony::gibName() const
{
    return name;
}

