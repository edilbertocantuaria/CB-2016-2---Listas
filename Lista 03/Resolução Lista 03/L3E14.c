#include<stdio.h>
int main ()
{
    int tamanho_1,tamanho_2,t,T,cont;
    scanf("%d %d",&tamanho_1,&tamanho_2);
  cont=0;
  t=tamanho_1;
  T=tamanho_2;
    while(t-T != 0){
        t=tamanho_1 +2*cont;
        T=tamanho_2 +3*cont;
        cont++;
    }
printf("%d",cont-1);
    return 0;
}
