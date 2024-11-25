#include<stdio.h>

int main (){
    int passos,total_passos=0,meta=10000;

    printf("Seja bem vindo ao sistema de monitoramento de passos!\n");

    while(total_passos<meta){
        printf("Digite o numero de passos dados:");
        scanf("%d",&passos);

        if(passos>0){
            total_passos+=passos;
            printf("Total de passos ate agora:%d\n",total_passos);

            if(total_passos>=meta){
                printf("Parabens! Voce atingiu a meta de 10.000 passos!\n");
                break;
            }
        } else{
        printf("numero invalido de passos. Por favor, insisra um valor positivo.\n");
        }
    }
    printf("monitoramento encerrado. total de passos:%d.\n",total_passos);
    return 0;
}
