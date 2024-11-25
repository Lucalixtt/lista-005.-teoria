#include <stdio.h>
int main() {
float nivel_bateria;
printf("Monitoramento de Bateria do Robô\n");
do{
 printf("\nDigite o nível atual da bateria (em %%): ");
scanf("%f", &nivel_bateria);
if (nivel_bateria < 20.0) {
 printf("ALERTA: Nível de bateria baixo (%.2f%%). Por favor, recarregue o robô!\n", nivel_bateria);
}else{
printf("Nível de bateria está adequado (%.2f%%).\n", nivel_bateria);
}
} while (nivel_bateria < 20.0);
printf("Monitoramento encerrado. Bateria acima de 20%%.\n");
 return 0;
 }

