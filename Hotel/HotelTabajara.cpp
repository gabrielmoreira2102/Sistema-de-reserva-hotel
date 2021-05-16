#include "Quarto.hpp"
#include "Reserva.hpp"

#include <iostream>

int  main ()
{
	Reserva F;
	
	F.AddQuarto();
	
	cout << " ************************************* " << endl;
	cout << " **   BEM VINDO AO HOTEL TABAJARA   ** " << endl;
	cout << " *************************************\n" << endl;
	
	int a = 1;
	string Cli, CPFCli;
	string FU, CPFFU;


	while((a)!= 0)
	{
		cout << "\nDigite a opcao desejada" << endl;
		cout << "\n\t1 - Cadastrar Cliente" << endl;
		cout << "\t2 - Cadastrar Funcionario" << endl;
		cout << "\t3 - Ver Lista de Quartos" << endl;
		cout << "\t4 - Efetuar Reserva" << endl;
		cout << "\t5 - Consulta Geral" << endl;
		cout << "\t6 - Consulta Quarto especifico" << endl;
		cout << "\t0 - Sair\n" << endl;

		cout << "Qual sua opcao: "; cin >> a;

		switch(a)
		{
		case 1:
			cout << "\nCADASTRO DE CLIENTE" << endl;
			cout << "\nNome: "; cin >> Cli;
			cout << "\nCPF: "; cin >> CPFCli;
			cout << "\n" << endl;
			F.AddCli(Cli, CPFCli);
			cout << "\n" << endl;
			break;

		case 2:
			cout << "\nCADASTRO DE FUNCIONARIO" << endl;
			cout << "\nNome: "; cin >> FU;
			cout << "\nCPF: "; 	cin >> CPFFU;
			cout << "\n" << endl;
			F.AddFunc(FU, CPFFU);
			cout << "\n" << endl;
			break;

		case 3:
			F. ListaQ();
			break;

		case 4:
			F.listagem();
			cout << "\nNOVA RESERVA" << endl;
			cout << "\nNome do Cliente: "; cin >> Cli;
			cout << "\nNome do Atendente: "; cin >> FU;
			F. SetNovaReserva( " Gumercindo " , " Jorge " );
			break;

		case 5:
			F.Info();
			break;

		case 6:
			int b;
			cout << "\nNumero do Quarto: "; cin >> b;
			F. ConsultaQ(b);
			break;

		case 0:
      cout << "\nFinalizando sistema!\n\n" << endl;
      break;

    default:
     	cout << "\n\nOpção invalida!\n\n" << endl;
		}
	}
}