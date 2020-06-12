#include <stdio.h>

struct pessoa {
  char nome[30];
  float nota;
};

int main(void) {
  int quant,i,Ime,Ima;
  float menor, maior ;

  printf("Digite a quantidade de alunos: ");
  scanf("%i", &quant);

  struct pessoa aluno[quant];

  for(i=0;i<quant;i++) {
    printf("\nDigite o nome do aluno:\n");
    scanf("%s",aluno[i].nome);
    printf("Digite a nota:\n");
    do {
      scanf("%f",&aluno[i].nota);
    }while(aluno[i].nota < 0 || aluno[i].nota > 100);
    
    if(i==0) {
      maior=aluno[i].nota;
      menor=aluno[i].nota;
      Ime=Ima=i;
    }
    else {
      if(maior < aluno[i].nota) {
        maior=aluno[i].nota;
        Ima=i;
      }
        
      if(menor > aluno[i].nota) {
        menor=aluno[i].nota;
        Ime=i;
      }
    }
    system("cls");
  }

  printf("Relação dos alunos\n");
  for(i=0;i<quant;i++) {
    printf("Aluno: %s\n",aluno[i].nome);
    printf("Nota: %.2f\n\n",aluno[i].nota);
  }
  printf("O Aluno: %s tirou a maior nota\n",aluno[Ima].nome);
  printf("A maior nota foi %.2f\n", aluno[Ima].nota);
  printf("O Aluno: %s tirou a menor nota\n",aluno[Ime].nome);
  printf("A menor nota foi: %.2f\n", aluno[Ime].nota);
  
  return 0;
}
