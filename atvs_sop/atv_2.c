#include <stdio.h>
#include <stdlib.h>

/*

2) Escreva um programa em C que realize o cadastro de produtos. O programa deve solicitar ao usuário a quantidade de produtos que serão cadastrados. Para cada produto, será solicitado o código (numero inteiro), nome (string) e valor (número real).

O programa deverá guardar as informações dos produtos em um arquivo chamado produtos.txt. Exige-se que o programa sempre adicione novos produtos no final do arquivo,o programa nunca deve sobreescrever o arquivo.

*/

int main(void) {
  int i, prod, codprod [prod];
  float valorprod [prod];
  char nomeprod [prod];

  FILE *arquivos = fopen("produtos.txt", "a");

  printf("Quantos produtos serão cadastrados?\n");
  scanf("%i", &prod);

  fprintf(arquivos,"%s %d %s", "\nProdutos cadastrados: ", prod, "\n");

  for(i = 0; i < prod; ++i){
    printf("\nProduto: %d", i + 1);
    fprintf(arquivos,"%s %d %s", "Produto", i + 1, "=> ");
    printf("");
    
    printf("\nQual o código do produto: ");
    scanf("%i", &codprod[i]);
    fprintf(arquivos,"%s %d %s", "Código: ", codprod[i], " ");

    printf("\nQual o nome do produto: ");
    scanf("%s", nomeprod);
    fprintf(arquivos,"%s %s %s", "Nome do Produto: ", nomeprod, " ");

    printf("\nQual o valor do produto? ");
    scanf("%f", &valorprod[i]);
    fprintf(arquivos,"%s %g %s", "Valor do Produto: ", valorprod[i],"\n");
  }
  
  fclose(arquivos);
}