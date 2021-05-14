#include "Quartos.hpp"

Quartos::Quartos()
{
    simples = 0;
    luxo = 0;
    numCama = 0;
		tipoCama = 0;
}

void Quartos::setSimples(int s)
{
    simples = s;
}

void Quartos::setLuxo(int l)
{
    luxo = l;
}

void Quartos::setnumCama(int cama)
{
    numCama = cama;
}

void Quartos::settipoCama(int tipo)
{
    tipoCama = tipo;
}

int Quartos::getSimples()
{
    return simples;
}

int Quartos::getLuxo()
{
    return luxo;
}

int Quartos::getnumCama()
{
    return numCama;
}

int Quartos::gettipoCama()
{
    return tipoCama;
}