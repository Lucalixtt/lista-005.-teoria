#include <stdio.h>
#include <string.h>
int main() {
     char comando[10];
     int x = 0, y = 0;
    printf("Controle do Robô em um espaço de 10x10 metros.\n");
     printf("Comandos disponíveis: 'frente', 'tras', 'esquerda', 'direita'. Digite 'sair' para encerrar.\n");
     do{
    printf("\nDigite o comando para movimentar o robô: ");
     scanf("%s", comando);
     if (strcmp(comando, "frente") == 0) {
    y++;
     printf("O robô moveu-se para frente. Posição atual: (%d, %d)\n", x, y);
     } else if (strcmp(comando, "tras") == 0) {
         y--;
         printf("O robô moveu-se para trás. Posição atual: (%d, %d)\n", x, y);
          } else if (strcmp(comando, "esquerda") == 0) {
              x--;
              printf("O robô moveu-se para a esquerda. Posição atual: (%d, %d)\n", x, y);
               } else if (strcmp(comando, "direita") == 0) {
                    x++;
                printf("O robô moveu-se para a direita. Posição atual: (%d, %d)\n", x, y);
                } else if (strcmp(comando, "sair") != 0) {
                     printf("Comando inválido. Tente novamente.\n");
                     }
                      } while (strcmp(comando, "sair") != 0);
                       printf("Programa encerrado. Posição final do robô: (%d, %d)\n", x, y);
return 0;
}

