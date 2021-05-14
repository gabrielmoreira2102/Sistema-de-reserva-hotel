#ifndef Funcionario_hpp
#define Funcionario_hpp

#include<iostream>
using namespace std;

class Funcionario
{
public:
	Funcionario(string nome);
	int getId();
	string getNome();
	void imprime();

private:
	string nome;
	int IdFunc;

	int static ultimoIdFunc;

};

#endif