#include "Funcionario.hpp"

Funcionario::Funcionario(string Nome, string RG)
{
	this->Nome = Nome;
	this->RG = RG;
}

void Funcionario::Info()
{
	cout << " Nome: " << Nome << endl;
	cout << " RG: " << RG << endl;
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

string Funcionario::GetRG()
{
	return RG;
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