#include <stdio.h>
#include <string.h>

struct Reg_pagto
{
  char nome[30];
  char cpf[13], RG[10];
  float horas_trab[6];
  float salario;
  float FGTS[2][2];
};


int main()
{
  struct Reg_pagto func1; 
  strcpy(func1.nome, "Ana");
  func1.salario = 1000;
  func1.horas_trab[0] = 120.4;
  func1.FGTS[0][0] = 80.00;
  
  printf("%s", func1.nome);
  printf("\n%.2f", func1.salario);
  printf("\n%.2f", func1.horas_trab[0]);
  printf("\n%.2f", func1.FGTS[0][0]);
  
}
