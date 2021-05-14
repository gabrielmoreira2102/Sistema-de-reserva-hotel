#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Quartos.hpp"

int main() 
{
  Cliente c1("Gabriel");
	Cliente c2("Bento");
	Cliente c3("Lucas");
	Cliente c4("Michele");

	c1.imprime();
	c2.imprime();
	c3.imprime();
	c4.imprime();

	return 0;
}