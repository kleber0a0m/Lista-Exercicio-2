/*
Uma brincadeira que crian�as adoram � se comunicar na l�ngua do P,
acrescentando p� antes de cada s�laba, como uma forma de c�digo para dificultar que outras
pessoas entendam a conversa (p�-va p�-mos p�-no p�-ci p�-ne p�-ma?). Jacy e K�tia
adaptaram a l�ngua do P para mensagens eletr�nicas, acrescentando a letra P min�scula 'p'
antes de cada letra das palavras de uma mensagem. Um exemplo de mensagem codificada e a
respectiva mensagem decodificada � mostrada na figura abaixo.
Sua tarefa � escrever um programa que decodifique uma mensagem escrita na l�ngua do P eletr�nica
de Jacy e K�tia.
Entrada A entrada consiste de uma �nica linha, contendo uma mensagem escrita na l�ngua do P
eletr�nica de Jacy e K�tia.

Sa�da
Seu programa deve produzir uma �nica linha, contendo a mensagem decodificada.

Restri��es
A mensagem cont�m apenas letras mai�sculas e min�sculas e espa�os em branco. A
mensagem tem entre 1 e 1000 caracteres. N�o h� dois espa�os em branco consecutivos na
mensagem.

Exemplos

Entrada
pUpm pfpiplpmpe plpepgpapl

Sa�da
Um filme legal

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int k;
	char linha[1000];
	gets(linha);
	
	for(k=0;k<strlen(linha);k++){
		if(linha[k]!='p'){
			printf("%c",linha[k]);
		}
		
	}
	
    return 0;
}
