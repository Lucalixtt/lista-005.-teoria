#include <stdio.h>
int main() {
float nivel_bateria;
printf("Monitoramento de Bateria do Rob�\n");
do{
 printf("\nDigite o n�vel atual da bateria (em %%): ");
scanf("%f", &nivel_bateria);
if (nivel_bateria < 20.0) {
 printf("ALERTA: N�vel de bateria baixo (%.2f%%). Por favor, recarregue o rob�!\n", nivel_bateria);
}else{
printf("N�vel de bateria est� adequado (%.2f%%).\n", nivel_bateria);
}
} while (nivel_bateria < 20.0);
printf("Monitoramento encerrado. Bateria acima de 20%%.\n");
 return 0;
 }

