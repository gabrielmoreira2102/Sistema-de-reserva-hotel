#include "Funcionario.hpp"

Funcionario::Funcionario(string Nome, string CPF)
{
	this->Nome = Nome;
	this->CPF = CPF;
}

void Funcionario::Info()
{
	cout << " Nome: " << Nome << endl;
	cout << " CPF: " << CPF << endl;
	cout << " Numero de reservas: " << IDReserva.size() << endl;
	for(int i=0; i<IDReserva.size(); i++)
	{
		cout << " ID reserva: " << IDReserva[i] << endl;
	}
	cout << " \n " ;
}

void Funcionario::ImprimeNome()
{
	cout << " Nome do Funcionario: " << Nome << endl;
}

void Funcionario::ResInfo(int Q)
{
   NumroQuarto.push_back(Q);
}

int Funcionario::GetQuartoNum(int i)
{
	return NumroQuarto[i];
}

string Funcionario::GetNome()
{
	return Nome;
}

string Funcionario::GetCPF()
{
	return CPF;
}

int Funcionario::GetNumReser()
{
	return IDReserva.size();
}

void Funcionario::SetIdReserva(int ID)
{
	IDReserva.push_back(ID);
}

int Funcionario::GetIdReserva(int i)
{
	return IDReserva[i];
}