#include <stdio.h>
int main() {
float distancia;
char opcao;
printf("Leitura do sensor de distância do robô.\n");
printf("O programa continuará até que uma distância menor que 10 cm seja registrada ou você escolha parar.\n");
do{ printf("\nDigite a distância medida (em cm): ");
scanf("%f", &distancia);
 if (distancia < 10.0) {
printf("Distância registrada: %.2f cm. Condição alcançada! Encerrando o programa.\n", distancia);
 break;
}else{
printf("Distância registrada: %.2f cm.\n", distancia);
printf("Deseja continuar as leituras? (S/N): ");
scanf(" %c", &opcao);
 }
} while (opcao == 'S' || opcao == 's');
printf("Programa encerrado.\n");
 return 0;
 }
