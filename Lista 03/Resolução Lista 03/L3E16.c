#include <stdio.h>
#include <stdlib.h>
double ptgm(int x, double y);
int main()
{
double idt=0, otimo=0, bom=0, regular=0, ruim=0, pessimo=0;
int idade=0, opiniao=0, qtde=0;
    do{
  scanf("%d", &idade);
    if(idade>0){
            do{
            scanf("%d", &opiniao);
                switch(opiniao){
                case 1:
                    otimo++;
                    break;
                case 2:
                    bom++;
                    break;
                case 3:
                    regular++;
                    break;
                case 4:
                    ruim++;
                    break;
                case 5:
                    pessimo++;
                    break;}
               }while(opiniao<1 || opiniao>5);
            idt+=idade;
            qtde++;
               }
    }while(idade>=0);
        printf("qtdede de participantes: %d\n",qtde);
    idt=idt/qtde;
        printf("idade media dos participantes: %.1lf\n",idt);

otimo=ptgm(qtde, otimo);
    bom=ptgm(qtde, bom);
regular=ptgm(qtde, regular);
    ruim=ptgm(qtde, ruim);
pessimo=ptgm(qtde, pessimo);
printf("otimoimo: %.1lf%%\n",otimo);
    printf("bomm: %.1lf%%\n",bom);
printf("regulargular: %.1lf%%\n",regular);
    printf("ruimim: %.1lf%%\n",ruim);
printf("pessimossimo: %.1lf%%\n",pessimo);
    return 0;
}

double ptgm(int x, double y)
{
    y*=100;
    y/=x;
    return y;
}
