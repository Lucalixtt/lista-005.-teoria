#include <stdio.h>
 int main() {
int opcao;
printf("Controle de Atua��o do Rob�\n");
printf("1 - Ligar l�mpada\n");
printf("2 - Tocar som\n");
printf("3 - Mover bra�o\n");
printf("0 - Encerrar o programa\n");
do{
printf("\nEscolha uma a��o para o rob�: ");
scanf("%d", &opcao);
switch (opcao) {
 case 1: printf("A��o selecionada: Ligar l�mpada.\n");
 break;
 case 2: printf("A��o selecionada: Tocar som.\n");
break;
 case 3: printf("A��o selecionada: Mover bra�o.\n"); break;
case 0: printf("Encerrando o programa.\n");
break;
default: printf("Op��o inv�lida. Tente novamente.\n");
 }
} while (opcao != 0);
return 0;
 }

