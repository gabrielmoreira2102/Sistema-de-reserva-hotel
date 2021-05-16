#include "Quarto.hpp"

void Quarto::SetQuarto(int Numero, string Categoria, int Camas, int Capacidade, int Valor)
{
	this->Numero = Numero;
	this->Categoria = Categoria;
	this->Camas = Camas;
	this->Capacidade = Capacidade;
	this->Valor = Valor;
}

int Quarto::GetCapacidade()
{
	return Capacidade;
}

int Quarto::GetNumero()
{
	return Numero;
}

int Quarto::GetCamas()
{
	return Camas;
}

void Quarto::Info()
{
	cout << " Numero do Quarto: " << Numero << endl;
	cout << " Categoria: " << Categoria << endl;
	cout << " Valor diaria: " << Valor << endl;
	if(Camas == 1)
	    cout << " Cama de casal " << endl;
	else if(Camas == 2)
		cout << " Cama de solteiro " << endl;

	cout << " Capacidade: " << Capacidade << endl;
}

bool Quarto::GetOcupado ()
{
	return Ocupado;
}

bool Quarto::SetOcupado ()
{
	Ocupado =! Ocupado;
	return Ocupado;
}