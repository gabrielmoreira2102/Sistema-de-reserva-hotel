#include <iostream>
#include "Reserva.hpp"
using namespace std;

int main() 
{
	Reserva simples;

	simples.setCliente();
	simples.verificaStatus();
	simples.escolheQuarto();
	simples.dadosReserva();  
}