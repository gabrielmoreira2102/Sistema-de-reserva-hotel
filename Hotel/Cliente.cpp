#include "Cliente.hpp"

int Cliente::ultimoID = 0;

Cliente::Cliente(string nome)
{
  this->nome = nome; 
	this->numID = geraNumID();
}

void Cliente::imprime()
{
  cout << numID << " - " << nome << endl;
}

int Cliente::geraNumID()
{
	ultimoID++;
	return ultimoID;
}