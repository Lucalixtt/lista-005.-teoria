#include <stdio.h>
#include <string.h>
int main() {
     char comando[10];
     int x = 0, y = 0;
    printf("Controle do Rob� em um espa�o de 10x10 metros.\n");
     printf("Comandos dispon�veis: 'frente', 'tras', 'esquerda', 'direita'. Digite 'sair' para encerrar.\n");
     do{
    printf("\nDigite o comando para movimentar o rob�: ");
     scanf("%s", comando);
     if (strcmp(comando, "frente") == 0) {
    y++;
     printf("O rob� moveu-se para frente. Posi��o atual: (%d, %d)\n", x, y);
     } else if (strcmp(comando, "tras") == 0) {
         y--;
         printf("O rob� moveu-se para tr�s. Posi��o atual: (%d, %d)\n", x, y);
          } else if (strcmp(comando, "esquerda") == 0) {
              x--;
              printf("O rob� moveu-se para a esquerda. Posi��o atual: (%d, %d)\n", x, y);
               } else if (strcmp(comando, "direita") == 0) {
                    x++;
                printf("O rob� moveu-se para a direita. Posi��o atual: (%d, %d)\n", x, y);
                } else if (strcmp(comando, "sair") != 0) {
                     printf("Comando inv�lido. Tente novamente.\n");
                     }
                      } while (strcmp(comando, "sair") != 0);
                       printf("Programa encerrado. Posi��o final do rob�: (%d, %d)\n", x, y);
return 0;
}

