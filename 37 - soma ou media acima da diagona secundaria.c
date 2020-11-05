/*

Acima da Diagonal Secund�ria
Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule
e mostre a soma ou a m�dia considerando somente aqueles elementos que est�o acima da diagonal secund�ria da matriz,
conforme ilustrado abaixo (�rea verde).
Entrada
A primeira linha de entrada contem um �nico caractere Mai�sculo O ('S' ou 'M'), indicando a opera��o (Soma ou M�dia) que
dever� ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que comp�em a matriz. Voc�
pode gerar valores aleat�rios para sua matriz se preferir.
Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.
*/

#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=12,m=12,l,c;
	float matriz[n][m],soma=0;
	char opcao[1];
	scanf("%c",&opcao[0]);

	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			scanf("%f",&matriz[l][c]);
		}
	}
	
	if(opcao[0] == 'S'){
		for(l=0;l<n;l++){
			for(c=0;c<m;c++){
				if(c>l){
					soma+=matriz[l][m-c-1];
				}
			}
		}
		printf("\n%.2f",soma); 
	}else if(opcao[0]=='M'){
		for(l=0;l<n;l++){
			for(c=0;c<m;c++){
				if(c>l){
					soma+=matriz[l][m-c-1];
				}
			}
		}
		printf("\n%.2f",soma/66); 
	}
	
    return 0;
}
