#include <stdio.h>
int main (){
int numero[199], contador=0, auxiliar_inverter=199;
do{
    scanf("%d", & numero[contador]);
    contador++;
}while (contador<=199);
do {
    printf("%d ", numero[auxiliar_inverter]);
    auxiliar_inverter--;
}while (auxiliar_inverter>=0);
printf("\n");
return 0;
}
