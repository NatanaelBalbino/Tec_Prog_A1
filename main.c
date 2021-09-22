#include <stdio.h>
#include <stdlib.h>
#define MAX 9
struct Veiculo {
	char nome_veiculo[20];
	int modelo_ano;
	char placa_veiculo[8];
}; 
  struct Veiculo Cadastro[MAX];


void PrintVeiculo(){

    int i;

    if (Cadastro[1].modelo_ano < 0) {
      printf("Lista de carros vazia!");
    }
    else {
      for(i = 0; i == 1; i++)
      printf("\n %s eh o nome do Veiculo \n", Cadastro[1].nome_veiculo);
  	  printf("\n %d eh o ano do carro \n", Cadastro[1].modelo_ano);
  	  printf("\n %s eh a placa do carro \n", Cadastro[1].placa_veiculo);
    }
	return;
}

void cadastro() {

    int cad1, i, ordermenu;
    cad1 = 1;

  if (Cadastro[0].modelo_ano == 0){

    for (i = cad1; i >= cad1;){
      printf("\n Informe o nome do veiculo: ");
      scanf("%s", Cadastro[i].nome_veiculo);
      printf("\n Informe o modelo-ano do carro: ");
      scanf("%d", &Cadastro[i].modelo_ano);
      printf("\n Informe a placa do carro no formato XXX-YYYY (com o traco): ");
      scanf("%s", Cadastro[i].placa_veiculo);
    }
  }
  printf("Deseja ver um veiculo? Press 2\n");
  scanf("%d", &ordermenu);

  if (ordermenu == 2) {
    PrintVeiculo();
  }
  
	return;
}

int main (){

  int order;

  printf("Deseja cadastrar um veiculo? Press 1\n");
  printf("Deseja ver um veiculo? Press 2\n");
  printf("Deseja ver um veiculo? Press 2\n");
  scanf("%d", &order);

  if (order == 1) {
    cadastro();
    printf("Volte sempre!");
  }
  if (order == 2) {
    PrintVeiculo();
  }
  else {
    printf("OK!");
  }

  return 0;
}


