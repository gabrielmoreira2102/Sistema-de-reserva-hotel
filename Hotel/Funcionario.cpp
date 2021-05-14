#include "Funcionario.hpp"

int Funcionario::ultimoIdFunc = 0;

Funcionario::Funcionario(string nome)
{
    this-> nome = nome;
    this-> IdFunc = ++ultimoIdFunc;
}

void  Funcionario::imprime ()
{
    cout << " Matrícula do funcionario " << IdFunc << " : " << nome << endl;
}

int  Funcionario::getId()
{
    return IdFunc;
}

string Funcionario::getNome()
{
    return nome;
}