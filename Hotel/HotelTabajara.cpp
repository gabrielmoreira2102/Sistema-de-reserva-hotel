#include "Quarto.hpp"
#include "Reserva.hpp"

#include <iostream>

int  main ()
{
	Reserva F;
	
	F.AddQuarto();
	F.AddFunc ( " Gabriel " , " 123456789 " );
	F.AddFunc( " Bento " , " 987654321 " );
	F.AddFunc( " Lucas " , " 123789456 " );

	F.AddCli( " Michele " , " 654879236 " );
	F.AddCli( " Roberto " , " 7896535432 " );
	F.AddCli( " Carla " , " 3256987589 " );
	F.AddCli( " Gustavo " , " 9465873652 " );
	cout << " \n\n  " << endl;
	cout << " Bem Vindo ao Hotel TABAJARA: " << endl;
	cout << " ******************* \n\n  " << endl;
	
	int a = 1;
	string Cli, RGCli;
	string FU, RGFU;


	while((a)!= 0)
	{
		cout << " 1-Cadastrar Cliente: " << endl;
		cout << " 2-Cadastrar Funcionario: " << endl;
		cout << " 3-Ver Lista de Quartos: " << endl;
		cout << " 4-Efetuar Reserva: " << endl;
		cout << " 5-Consulta Geral: " << endl;
		cout << " 6-Consulta Quarto especifico: " << endl;
		cout << " 0-Sair: " << endl;

		cin >> a;

		switch(a)
		{
		case 1:
			cout << " Cadastro de clientes: " << endl;
			cout << " Nome: " << endl;
			cin >> Cli;
			cout << " RG: " << endl;
			cin >> RGCli;
			F. AddCli(Cli, RGCli);
			break;

		case 2:
			cout << " Cadastro de Funcionario: " << endl;
			cout << " Nome: " << endl;
			cin >> FU;
			cout << " RG: " << endl;
			cin >> RGCli;
			F. AddCli(FU, RGFU);
			break;

		case 3:
			F. ListaQ();
			break;

		case 4:
			F. listagem();
			cout << " Nova Reserva: " << endl;
			cout << " Nome do Cliente: " << endl;
			cin >> Cli;
			cout << " Nome do Atendente:: " << endl;
			cin >> FU;
			F. SetNovaReserva( " Gumercindo " , " Jorge " );
			break;

		case 5:
			F. Info();
			break;

		case 6:
			int b;
			cout << " Numero do Quarto: " << endl;
			cin >> b;
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