#include <iostream>
#include <string>
#include "Empregado.hpp"
#define QUANT_HORAS 8

void Empregado::getEmpregado(double getSalarioHora,std::string getNome){ 
    nome = getNome;
    salarioHora = getSalarioHora;
};


double Empregado::pagamentoMes(double horasTrabalhadas){
 
      double t = horasTrabalhadas; 
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > QUANT_HORAS){
        double x = horasTrabalhadas - QUANT_HORAS;
        t += x / 2;
      }
	  return t * salarioHora;
};
