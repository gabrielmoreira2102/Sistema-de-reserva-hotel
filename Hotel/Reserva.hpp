#ifndef Reserva_H
#define Reserva_H

#include "Quarto.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Data.hpp"

#include <vector>
#include <iostream>
using namespace std;

class Reserva
{
public:
	Reserva();

	int ID;
	void AddFunc(string nome, string RG);
	void AddCli(string nome, string RG);
	int GetaID();
	void SetNovaReserva(string cliente, string funcionario);
	void AddQuarto();
	void ConsultaQ(int N);
	void Info();
	void teste();
	void ResInfo();
	void ListaQ();
	void listagem();
	
private:
	Data datas;
	int TotalReser;
	string Data_I;
	string Data_F;
	Quarto quartos[10];
	vector <Cliente> clientes;
	vector <Funcionario> funcionarios;

};
# endif