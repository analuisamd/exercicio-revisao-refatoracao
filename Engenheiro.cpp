  
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
	int projetos;


  void printEngenheiro(double horas){
		std::cout << "Nome: " <<  nome <<std::endl;
		std::cout << "Salario Mes: " << Empregado::pagamentoMes(horas) << std::endl;
		std::cout << "Projetos: " << projetos << std::endl; 
    std::cout << std::endl;
	};
	
};