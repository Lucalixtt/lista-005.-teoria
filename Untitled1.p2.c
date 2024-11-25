#include <stdio.h>
int main(){

    float temp;

    do{
        printf("Bem vindo ao sistema! Digite a temperatura atual:");
        scanf("%f",temp);

        if(temp<20.0||temp>25.0){
            printf("ALERTA: temperatura fora do intervalo seguro!\n ");
        } else{
        printf("Temperatura dentro do intervalo seguro.\n");
        }
    } while(temp>20.0||temp<25.0);
    printf("Monitoramento encerrado. temperatura estabilizada.\n");

return 0;
}
