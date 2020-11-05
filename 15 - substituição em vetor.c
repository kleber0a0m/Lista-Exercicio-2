/*
URI 1172- Substitui��o em Vetor
Fa�a um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X
por 1. Em seguida mostre o vetor X.
Entrada: A entrada cont�m 10 valores inteiros, podendo ser positivos ou negativos.
Sa�da: Para cada posi��o do vetor, escreva "X[i] = x", onde i � a posi��o do vetor e x � o valor armazenado
naquela posi��o.

Exemplo de Entrada 
0
-5
63
0
...

Exemplo de Sa�da
X[0] = 1
X[1] = 1
X[2] = 63
X[3] = 1
...
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int vetor[10],k;
	
	for(k=0;k<10;k++){
		scanf("%d",&vetor[k]);
		if(vetor[k]<=0){
			vetor[k]=1;
		}
	}
		
	for(k=0;k<10;k++){
		printf("\n%d",vetor[k]);
	}
	
    return 0;
}
