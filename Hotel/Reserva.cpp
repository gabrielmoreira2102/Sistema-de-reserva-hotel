#include "Reserva.hpp"

Reserva::Reserva()
{
	status = 1;
}

void Reserva::verificaStatus()
{
	if(status == 1){
		cout << "Quarto liberado" << endl;
	}
	if(status == 2){
		cout << "Quarto ocupado" << endl;
	}
}

void Reserva::escolheQuarto()
{
	cout << "Escolha o tipo de quarto - simples ou luxo: " << endl;
	cin >> tipoQuarto;
	cout << "Quantas camas? " << endl;
	cin >> numCama;
	cout << "Qual o tipo de cama - solteiro ou casal: " << endl;
	cin >> tipoCama;
	cout << "Reserva para quantos dias? " << endl;
	cin >> periodo;
	cliente.imprimeDados();
}

void Reserva::dadosReserva()
{
	cout << "\nDados de Cadastro: " << endl;

	cout << "Tipo do quarto: " << tipoQuarto << endl;
	cout << "Quantidade de camas: " << numCama << endl;
	cout << "Tipo de cama: " << tipoCama << endl;
	cout << "Período da reserva: " << periodo << " dias!" << endl;
}

void Reserva::setStatus(int s)
{
	status = s;
}

void Reserva::setTipoQuarto(string tq)
{
	tipoQuarto = tq;
}

void Reserva::setNumCama(int nc)
{
	numCama = nc;
}

void Reserva::setTipoCama(string tc)
{
	tipoCama = tc;
}

void Reserva::setCliente()
{
	cliente.dadosCliente();
}

void Reserva::getStatus()
{
	cliente.verificaStatus;
}

string Reserva::getTipoQuarto()
{
	return tipoQuarto;
}

int Reserva::getNumCama()
{
	return numCama;
}

string Reserva::getTipoCama()
{
	return tipoCama;
}