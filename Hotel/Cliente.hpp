#ifndef Cliente_H
#define Cliente_H

#include <vector>
#include <iostream>
using namespace std;

class Cliente
{
public:
	Cliente (string Nome, string RG);

	void ImprimeNome();
	void Info();
	void SetIdReserva(int ID);

	string GetNome();
	string GetRG();
	int GetNumReser();
	int GetIdReserva(int i);

private:
	string Nome;
	string RG;
	vector <int> IDReserva;
	
};
# endif