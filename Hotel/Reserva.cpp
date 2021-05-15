#include "Reserva.hpp"

int ID = 0 ;
Reserva::Reserva()
{
	
}

void Reserva::AddFunc(string nome, string RG)
{
	funcionarios.push_back(Funcionario(nome, RG));
	cout << " Funcionario adicionado com sucesso: " << nome << " RG: " << RG << endl;
}

void Reserva::AddCli(string nome, string RG)
{
  clientes.push_back(Cliente(nome, RG));
	 cout << " Cliente adicionado com sucesso: " << nome << " RG: " << RG << endl;
}

void Reserva::SetNovaReserva(string cliente, string funcionario)
{
	int a, b, c, contagem = 0 ;
	int dia, mes, ano, tempo;
	cout << " Data de inicio da reserva: " << endl;
	cout << " \n Numero de dias: ";
	cin >> tempo;
	cout << " Dia: ";
	cin >> dia;
	cout << " \nMes: ";
	cin >> mes;
	cout << " \nAno: ";
	cin >> ano;
	cout << " \nNumero de dias: ";
	cin >> tempo;

	this->datas.setDia(dia);
	this->datas.setMes(mes);
	this->datas.setAno(ano);
	this->datas.setTempo(tempo);
	
	cout << " Tipo de quarto desejado 1:Luxo - 2:Normal " << endl;
	cin >> a;

	if (a == 1 || a == 2 )
	{
		cout << " Escolha a capacidade do Quarto: (Maximo 4) " << endl;
		cin >> b;
		if (b <= 4 )
		{
			for(int i=0; i<10; i++)
			{

				if (quartos[i].GetCapacidade() == b && quartos[i].GetOcupado() == false && quartos[i].GetCamas() == a)
				{
					contagem ++;
					cout << " Quartos disponiveis: " << endl;
					quartos[i].Info();
				}
			}
			if (contagem == 0)
			{
				cout << " Nao ha Quartos disponiveis: " << endl;
				SetNovaReserva(cliente, funcionario);
			}
		}
		
		{
			cout << " numero invalido: " << endl;
			SetNovaReserva (cliente, funcionario);
		}
		cout << " Selecione quarto atravez do seu numero: " << endl;
		cin >> c;
		for(int i=0; i<10; i++)
		{
			if(quartos[i].GetNumero() == c && quartos[i].GetOcupado() == false)
			{
				quartos[i].SetOcupado();
				TotalReser += GetaID();
				for(int i=0; i<clientes.size(); i++)
				{
					if(clientes[i].GetNome() == cliente)
					{
						clientes[i].SetIdReserva(ID);
						cout << " Reserva feito com sucesso \n\n " << endl;
					}
				}
				for(int j=0; j<funcionarios.size(); j++)
				{
					if(funcionarios[j].GetNome() == funcionario)
					{
						funcionarios[j].ResInfo(c);
						funcionarios[j].SetIdReserva(ID);
					}
				}
			}
			
		}
	}
	else
	{
		cout << " numero invalido: " << endl;
		SetNovaReserva(cliente, funcionario);
	}
}
void Reserva::ResInfo()
{

}

void Reserva::teste()
{
	
	for(int i=0; i<clientes.size(); i++)
	{
		clientes [i]. Info ();
	}
	cout << TotalReser;
	for(int i=0; i<10; i++)
	{
		quartos[i].SetOcupado();
	}
}

void Reserva::Info()
{
		cout << " Lista de Clientes: " << endl;
		for(int i=0; i<clientes.size(); i++)
		{
			clientes[i].Info();
		}
		cout << " Funcionarios: \n" << endl;
		for( int i=0; i<funcionarios.size(); i++)
		{
			funcionarios[i].Info();
			if(funcionarios[i].GetNumReser() > 0 )
			{
				for(int j=0; j<funcionarios[i].GetNumReser(); j++)
				{
					int a;
					datas.toString(j);
					a = funcionarios[i].GetQuartoNum(j) - 1;
					cout << " Reserva Numero: " << funcionarios[i].GetIdReserva(j) << endl;
					quartos[a].Info();
					cout << " \n ";
				}
			}
		}
}

int Reserva::GetaID()
{
	return ++ID;
}

void Reserva::listagem()
{
	for(int i=0; i<funcionarios.size(); i++)
	{
		funcionarios[i].ImprimeNome();
	}
	for(int i=0; i<clientes.size(); i++)
	{
		clientes[i].ImprimeNome();
	}
}

void Reserva::AddQuarto()
{
	quartos[0].SetQuarto(1, " Normal " , 1 , 2 , 75 );
	quartos[1].SetQuarto(2, " Normal " , 1 , 4 , 100 );
	quartos[2].SetQuarto(3, " Normal " , 2 , 2 , 120 );
	quartos[3].SetQuarto(4, " Normal " , 2 , 3 , 100 );
	quartos[4].SetQuarto(5, " Normal " , 1 , 2 , 75 );
	quartos[5].SetQuarto(6, " Normal " , 1 , 4 , 100 );
	quartos[6].SetQuarto(7, " Luxo " , 1 , 4 , 200 );
	quartos[7].SetQuarto(8, " Luxo " , 2 , 3 , 220 );
	quartos[8].SetQuarto(9, " Luxo " , 2 , 2 , 230 );
	quartos[9].SetQuarto(10, " Luxo " , 1 , 2 , 190 );
}

void Reserva::ConsultaQ(int N)
{
	for(int i=0; i< 10; i++)
	{
		if(quartos[i].GetNumero() == N)
		{
			quartos[i].Info();
		}
	}
}

void Reserva::ListaQ()
{
	for(int i=0; i<10; i++)
	{
		quartos[i].Info();
	}
}