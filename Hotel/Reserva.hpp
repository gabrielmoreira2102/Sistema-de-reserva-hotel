#ifndef Reserva_hpp
#define Reserva_hpp

#include <iostream>  
using namespace std;

class Reserva
{
public:
	Reserva();
  void dadosReserva();
  void verificaStatus();
  void escolheQuarto();

	void setStatus(int s);
  void setTipoQuarto(string tq);
	void setNumCama(int nc);
	void setTipoCama(string tc);
	void setCliente();
	
	void getStatus();
	string getTipoQuarto();
	int getNumCama();
	string getTipoCama();
	Cliente getCliente();

private:
  int status;
	string tipoQuarto;
	int numCama;
	string tipoCama;
	int periodo;
	Cliente cliente;		
};

#endif 