#ifndef Quarto_H
#define Quarto_H

#include <iostream>
using namespace std;

class Quarto
{
public:
	Quarto(){};

	void Info();
	void SetQuarto(int Numero, string Categoria, int Camas, int Capacidade, int Valor);
	bool SetOcupado();

	int GetCamas();
	int GetCapacidade();
	int GetNumero();
	bool GetOcupado();
	
private:
	string Categoria;
	int Valor;
	int Camas; 
	int Numero;
	int Capacidade;
	bool Ocupado;
};

# endif