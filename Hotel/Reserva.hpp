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
	Reserva(Data datas, int TotalReser, string Data_I, string Data_F);

	int ID;
	void AddFunc(string nome, string CPF);
	void AddCli(string nome, string CPF);
	void SetNovaReserva(string cliente, string funcionario);
	void ResInfo();
	void teste();
	void Info();
	int GetID();
	void listagem();
	void AddQuarto();
	void ConsultaQ(int N);
	void ListaQ();
	void setData();
	Data getData();
					
private:
	Data datas;
	int TotalReser;
	string Data_I;
	string Data_F;
	Quarto quartos[5];
	vector <Cliente> clientes;
	vector <Funcionario> funcionarios;

};
# endif