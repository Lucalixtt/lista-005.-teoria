#include <stdio.h>
 int main() {
int opcao;
printf("Controle de Atuação do Robô\n");
printf("1 - Ligar lâmpada\n");
printf("2 - Tocar som\n");
printf("3 - Mover braço\n");
printf("0 - Encerrar o programa\n");
do{
printf("\nEscolha uma ação para o robô: ");
scanf("%d", &opcao);
switch (opcao) {
 case 1: printf("Ação selecionada: Ligar lâmpada.\n");
 break;
 case 2: printf("Ação selecionada: Tocar som.\n");
break;
 case 3: printf("Ação selecionada: Mover braço.\n"); break;
case 0: printf("Encerrando o programa.\n");
break;
default: printf("Opção inválida. Tente novamente.\n");
 }
} while (opcao != 0);
return 0;
 }

