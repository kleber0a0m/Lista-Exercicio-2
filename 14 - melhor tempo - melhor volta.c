/*

Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os
tempos registrados em cada volta. Fazer um programa em C para ler os tempos das N voltas, sendo que os
tempos devem ser armazenados em um vetor e após a entrada de todos os tempos de um piloto deve-se
apresentar o vetor juntamente com:
• melhor tempo;
• a volta em que o melhor tempo ocorreu;
• tempo médio das N voltas para cada piloto;

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int k,voltas,melhorTempo,melhorVolta;
	float media=0;

	printf("Quantas voltas foram dadas?\n");
	scanf("%d",&voltas);
	int tempo[voltas];
	
	
	for(k=0;k<voltas;k++){
		printf("Qual o tempo da %dº volta?:\n",k);
		scanf("%d",&tempo[k]);
		
		if(k==0 || (tempo[k]<melhorTempo) ){
			melhorTempo=tempo[k];
			melhorVolta=k;

		}
		media+=tempo[k];
	}
	
	printf("\nO melhor tempo foi %d na volta %d.",melhorTempo,melhorVolta);
	printf("\nA média das voltas é %.2f.",(media/voltas));
	
    return 0;
}
