#include <stdio.h>

int contador, conta_aprov, conta_rec;
float nota1, nota2, media, media_geral, soma;

main(){
	
conta_aprov = conta_rec = soma = 0;

for(contador = 0; contador < 10; contador++){ // de 0 ate 9 910 interacoes) 
     // entrada de dados 
	 printf("Digite a nota 1: "); 
     scanf("%f", &nota1);
     printf("Digite a nota 2: ");
     scanf("%f", &nota2);
     //processamento
     media = (float)(nota1+nota2*2)/3;
     printf("Media: %.2f\n", media);
     printf("***********\n\n");
     soma+=media; // soma = soma+media
     (media>6.0) ? conta_aprov++ : conta_rec++;
}
//saida de dados
media_geral = (float)(soma/10);
     printf("Nro de alunos aprovados: %d\n", conta_aprov);
     printf("Nro de alunos reprovados: %d\n", conta_rec);
     printf("Media geral da turma: %.2f\n", media_geral);
}

