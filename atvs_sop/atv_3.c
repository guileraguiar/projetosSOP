#include <stdio.h>
#include <stdlib.h>

/*

2) Escreva um programa em C que realize o cadastro de produtos. O programa deve solicitar ao usuário a quantidade de produtos que serão cadastrados. Para cada produto, será solicitado o código (numero inteiro), nome (string) e valor (número real).

O programa deverá guardar as informações dos produtos em um arquivo chamado produtos.txt. Exige-se que o programa sempre adicione novos produtos no final do arquivo,o programa nunca deve sobreescrever o arquivo.

3) *Escreva um programa em C que lista todos os produtos salvos no arquivo produtos.txt.

*/

int main(void) {

  FILE *arquivos = fopen("produtos.txt", "r");

  if (arquivos == NULL){
    return EXIT_FAILURE;

  }else{
    char buffer [100];

    while (feof(arquivos) == 0){
      fscanf(arquivos, "%s", buffer);
      printf(" %s\n", buffer);  
    }
  }
  fclose(arquivos); 
}