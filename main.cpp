#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.getEmpregado(35,"Joao Snow");
  eng1.projetos = 3;
  eng1.printEngenheiro(9.5);
  
  Engenheiro eng2;
  eng2.getEmpregado(30,"Daniela Targaryen");
  eng2.projetos = 1;
  eng2.printEngenheiro(8);
  
  Engenheiro eng3;
  eng2.getEmpregado(30,"Bruno Stark");
  eng2.projetos = 2;
  eng2.printEngenheiro(8);
  
  Vendedor vend1;
  vend1.getEmpregado(20,"Tonho Lannister");
  vend1.quotaMensalVendas = 5000;
  vend1.printVendedor(6);

  Vendedor vend2;
  vend2.getEmpregado(25,"Jose Mormont");
  vend2.quotaMensalVendas = 3000;
  vend2.printVendedor(8);

  Vendedor vend3;
  vend2.getEmpregado(30,"Sonia Stark");
  vend2.quotaMensalVendas = 4000;
  vend2.printVendedor(8);

  return 0;
}