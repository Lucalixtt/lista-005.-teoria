#include <stdio.h>
int main() {
float distancia;
char opcao;
printf("Leitura do sensor de dist�ncia do rob�.\n");
printf("O programa continuar� at� que uma dist�ncia menor que 10 cm seja registrada ou voc� escolha parar.\n");
do{ printf("\nDigite a dist�ncia medida (em cm): ");
scanf("%f", &distancia);
 if (distancia < 10.0) {
printf("Dist�ncia registrada: %.2f cm. Condi��o alcan�ada! Encerrando o programa.\n", distancia);
 break;
}else{
printf("Dist�ncia registrada: %.2f cm.\n", distancia);
printf("Deseja continuar as leituras? (S/N): ");
scanf(" %c", &opcao);
 }
} while (opcao == 'S' || opcao == 's');
printf("Programa encerrado.\n");
 return 0;
 }
