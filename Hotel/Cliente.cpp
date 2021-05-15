#include "Cliente.hpp"

Cliente::Cliente()
{
  Reservas() = 0;
}

void Cliente::dadosCliente()
{
	cout <<"\nNome do hospede: " << nome << endl;
	cin >> nome;
	cout << "Idade do hospede: " << idade << endl;
	cin >> idade;
	cout <<" CPF do hospede: " << cpf << endl;
	cin >> cpf;
	Cliente::setReservas(); 
}

void Cliente::imprimeDados()
{
  cout << "\nNome do hospede:  " << nome << endl;
	cout << "Idade do hospede: " << idade << " anos" << endl;
	cout <<" CPF do hospede: " << cpf << endl;
}

void Cliente::setNome(string n)
{
	nome = n;
}

void Cliente::setCpf(int _cpf)
{
	cpf = _cpf;
} 

void Cliente::setIdade(int _idade)
{
	idade = _idade;
}

void Cliente::setReservas(int res)
{
	reservas = _res;
}