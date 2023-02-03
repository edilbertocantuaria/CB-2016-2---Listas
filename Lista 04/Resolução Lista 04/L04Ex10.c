#include <stdio.h>
#include <math.h>

int main()
{
    int contador, numero[28];
    double variancia=0,  soma=0;

for(contador=0; contador<28; contador++){
        scanf("%d", &numero[contador]);
        soma=soma+numero[contador];}
    soma/=28;

    for(contador=0; contador<28; contador++){
        variancia=variancia+pow((numero[contador]-soma), 2);}
    variancia/=28;

    printf("%.1lf\n", variancia);
    printf("%.1lf\n", sqrt(variancia));
    return 0;
}
