#ifndef Cliente_h
#define Cliente_h

#include<iostream>
using namespace std;

class Cliente
{
public:
	Cliente(string nome);
  void imprime();

private:
  int numID;
  string nome;
  string idade;
	string CPF;
	string nacionalidade;

  int geraNumID();
	static int ultimoID;

};
# endif