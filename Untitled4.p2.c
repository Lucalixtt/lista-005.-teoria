#include<stdio.h>

int main(){
    float deposito_minimo=500.00,deposito;

    printf("Seja bem vindo ao sistema bancario!\n");
    printf("Para abrir sua conta, eh necessario um deposito minimo de R$ 500.00.\n");

    do{
        printf("Digite o valor do deposito inicial:R$");
        scanf("%f",&deposito);

        if(deposito<deposito_minimo){
            printf("Erro! O valor do deposito deve ser de no minimo R$500.00.\n");
        }
    }while (deposito<deposito_minimo);
    printf("Deposito de R$%.2f aceito! Conta aberta com sucesso.\n",deposito);
return 0;
}
