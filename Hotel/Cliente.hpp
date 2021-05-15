#ifndef Cliente_hpp
#define Cliente_hpp

#include <iostream>
using namespace std;

class Cliente
{
public:
	Cliente();
	void dadosCliente();
	void imprimeDados();
	void setNome(string n);
	void setCpf(int _cpf);
	void setIdade(int _idade);
	void setReservas(int _res);
	
	string getNome();
	int getCpf();
	int getIdade();
	int getReservas();

private:
	string nome;
	int cpf;
	int idade;
	int reservas;
	
};

#endif