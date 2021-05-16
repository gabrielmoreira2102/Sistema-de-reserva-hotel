#include "Reserva.hpp"
#include "Data.hpp"

int ID = 0 ;

Reserva::Reserva()
{

}

void Reserva::setData()
{
	
}

void Reserva::AddFunc(string nome, string CPF)
{
	funcionarios.push_back(Funcionario(nome, CPF));
	cout << " Funcionario adicionado com sucesso: " << nome << " CPF: " << CPF << endl;
}

void Reserva::AddCli(string nome, string CPF)
{
  clientes.push_back(Cliente(nome, CPF));
	 cout << " Cliente adicionado com sucesso: " << nome << " CPF: " << CPF << endl;
}

void Reserva::SetNovaReserva(string cliente, string funcionario)
{
	int a, b, c, contagem = 0 ;
	int dia, mes, ano, tempo;
	this->datas.setDia(dia);
	this->datas.setMes(mes);
	this->datas.setAno(ano);
	this->datas.setTempo(tempo);
	cout << "\nData de inicio da reserva" << endl;
	cout << "\nDia: "; cin >> dia;
	cout << "\nMes: "; cin >> mes;
	cout << "\nAno: "; cin >> ano;
	cout << "\nNumero de dias: "; cin >> tempo;
	cout << "\nTipo de quarto desejado 1:Luxo - 2:Normal "; cin >> a;
		if (a == 1 || a == 2 )
		{
			cout << "Escolha a capacidade do Quarto: (Maximo 4) "; cin >> b;
			if (b <= 4 )
			{
				for(int i=0; i<5; i++)
				{
					if (quartos[i].GetCapacidade() == b && quartos[i].GetOcupado() == false && quartos[i].GetCamas() == a)
					{
						contagem ++;
						cout << "\nQuartos disponiveis\n" << endl;
						quartos[i].Info();
						cout << "\n" << endl;
					}
				}
				if (contagem == 0)
				{
					cout << "\nNao ha Quartos disponiveis!!!" << endl;
					SetNovaReserva(cliente, funcionario);
				}
			}
			else{
				cout << "numero invalido: " << endl;
			}
		
		cout << " Selecione quarto pelo numero: "; cin >> c;
		for(int i=0; i<5; i++)
		{
			if(quartos[i].GetNumero() == c && quartos[i].GetOcupado() == false)
			{
				quartos[i].SetOcupado();
				TotalReser += GetID();
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
		clientes[i].Info ();
	}
	cout << TotalReser;
	for(int i=0; i<5; i++)
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

int Reserva::GetID()
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
	quartos[0].SetQuarto(1, " Simples " , 1 , 1 , 150 );
	quartos[1].SetQuarto(2, " Simples " , 2 , 2 , 300 );
	quartos[2].SetQuarto(3, " Simples " , 1 , 4 , 150 );
	quartos[3].SetQuarto(4, " Luxo " , 1 , 2 , 500 );
	quartos[4].SetQuarto(5, " Luxo " , 2 , 3 , 430 );
}

void Reserva::ConsultaQ(int N)
{
	for(int i=0; i< 5; i++)
	{
		if(quartos[i].GetNumero() == N)
		{
			quartos[i].Info();
		}
	}
}

void Reserva::ListaQ()
{
	for(int i=0; i<5; i++)
	{
		quartos[i].Info();
	}
}

