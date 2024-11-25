#include <stdio.h>

int main(){
    int nivel_combustivel;

    do{
        printf("Digite o nivel de combustivel atual:");
        scanf("%d",&nivel_combustivel);

        if(nivel_combustivel<15){
            printf("ALERTA! nivel de combustivel baixo (%.d%%). Por favor, recarregue o veiculo.\n",nivel_combustivel);
        } else if (nivel_combustivel<100){
        printf("nivel de combustivel adequado(%.d%%). Continue monitorando.\n",nivel_combustivel);
        }
    }while(nivel_combustivel<100);

    printf("Nivel de combustivel completo(100%). Monitoramento encerrado.\n");
return 0;
}
