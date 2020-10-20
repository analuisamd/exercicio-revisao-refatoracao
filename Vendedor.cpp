#include <string>
#include "Empregado.hpp"

#define QUANT_MESES 12
class Vendedor : public Empregado {

  public:

  double quotaMensalVendas; 	  
	
	double quotaTotalAnual() {
	  return quotaMensalVendas * QUANT_MESES;
	}

	void printVendedor(double horas){
		std::cout << "Nome: " << nome <<std::endl;
		std::cout << "Salario Mes: " << Empregado::pagamentoMes(horas) << std::endl;
		std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl; 
		std::cout << std::endl;
	};

};