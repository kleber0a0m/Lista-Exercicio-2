/*
Leia um vetor de caracteres (limite 100) utilizando a função gets(). Utilize a função strlen (Você deve incluir a
biblioteca string.h) para obter a quantidade de elementos do vetor de caracteres. Escreva o vetor lido em
ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int tamanho = 0,k;
	char vetor[100][100]; /*espaço para 100 strings de 100 caracteres cada*/

	printf("Qual o tamanho do vetor?\n");
	do{
		if(tamanho>=100){
			printf("\nO tamanho máximo é 100! \nTente outra vez\n\nQual o tamanho do vetor?\n");
			scanf("%i",&tamanho);
		}else{
			scanf("%i",&tamanho);
		}
	
	}while(tamanho>100);
		
	printf("\n\nDigite os valores do vetor:\n\n");
	for(k=0;k<tamanho;k++){
		fflush(stdin);
		gets(vetor[k]);
		
		
	}
	
	printf("\n\nO vetor em ordem inversa:\n\n");
	
	for(k=tamanho-1;k>=0;k--){
		printf("[%d] = %s\n",k,vetor[k]);
	}
	
    return 0;
}
