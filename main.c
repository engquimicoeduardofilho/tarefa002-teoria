#include <stdio.h>
#include <stdlib.h>

int main (){
    float agua, bala, coxinha;
    int vendasdia;
    float valortotal;
    float valortotaldia;
    int opt1, opt2;

    valortotaldia = 0;

    printf("deseja realizar venda? \n\n 1-sim \n 2-nao");
    scanf("%i", &opt1,opt2);

        if(opt1==1){
            printf("\n informe o produto: \n 1- agua \n 2- bala \n 3- coxinha  \n");
            scanf("%f", &agua, &bala, &coxinha);

            if(agua==1){
                printf("\n o valor total: R$3,00 \n");
            }

            else{
                printf("\n o valor total: R$1,50 \n");

            if(coxinha==3){
                printf("\n o valor total: R$6,50 \n ");
            }
            }
        }

            else{
                printf("\n fechar caixa? \n\n 1- sim \n 2- nao\n");
                scanf("%i", &opt1, &opt2);
                if(opt1==1){

                    printf("\n quantas agua foram vendidas?\n");
                    scanf("%f", &agua);
                    printf("\n quantas bala foram vendidas? \n");
                    scanf("%f", &bala);
                    printf("\n quantas coxinha foram vendidas?\n ");
                    scanf("%f", &coxinha);

                    vendasdia = agua + bala + coxinha;

                    valortotaldia = agua *3 + bala * 1.50 + coxinha * 6.50;

                    printf("\n\n vendas do dia:\n %i", vendasdia);
                    printf("\n\n valor total dia:\n %4.f", valortotaldia);

                }
                    else{
                        printf("\n entendido, ate logo \n");
                    }
                }

            return 0;
            }

