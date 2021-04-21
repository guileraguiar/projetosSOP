#include <stdio.h>
#include <stdlib.h>

/*

1) Escreva um programa em C que calcula a média de duas turmas de graduação. O programa deve solicitar ao usuário a quantidade de alunos da primeira turma, alocar um vetor de notas (números reais), calcular a media e mostrar a resposta. Depois, deve-se solicitar a quantidade de alunos da segunda turma e fazer o mesmo procedimento.

Exige-se que não deva ocorrer desperdício de memória: e após utilizada, a memória deve ser liberada.

*/

int main(void) {

  float *buffer, nota[] = {}, soma = 0;
  int quant = 0, i = 0, j = 0, max = 2;
  
  buffer = (float*) malloc(nota[i] * sizeof(int));

  while (i <= max){
    if (i == 0){ 
      i += 1;
      printf("\nInforme quantos alunos há na turma A:\n");
      scanf("%i",&quant);

      for (i = 0; i < quant; ++i){
        printf("Informe a nota %i%s", i + 1, "ª do aluno: ");
        scanf("%f",&nota[i]);
        soma = soma + nota[i];
      }

      float media = soma / quant;
      printf("\nA média da turma A é: %f", media);
      
    }else{
      printf("\n");
      printf("\nInforme quantos alunos há na turma B:\n");
      scanf("%i",&quant);

      for(j = 0; j < quant; ++j){
        printf("Informe a nota %i%s", j + 1, "ª do aluno: ");
        scanf("%f",&nota[i]);
        soma = soma + nota[i];
      }

      float media = soma / quant;
      printf("\nA média da turma B é: %f", media);
      break;
    } 
    //free (buffer);
  }
}