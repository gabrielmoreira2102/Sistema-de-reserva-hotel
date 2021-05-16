#ifndef Funcionario_H
#define Funcionario_H

#include <vector>
#include <iostream>
using namespace std;

class Funcionario
{
public:
	Funcionario(string Nome, string CPF);

	void ImprimeNome();
	void Info();
	void SetIdReserva(int ID);
	void ResInfo(int Q);

	string GetNome();
	string GetCPF();
	int GetNumReser();
	int GetQuartoNum(int i);
	int GetIdReserva(int i);
	
private:
	string Nome;
	string CPF;
	vector <int> IDReserva;
	vector <int> NumroQuarto;
};
# endif