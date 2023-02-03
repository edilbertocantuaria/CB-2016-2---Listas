#include <stdio.h>
int main (){
int numero[53], limite, contador, auxiliar=0, auxiliar_contador, soma=0;
float media;
for (contador=0; contador<53; contador++){
    scanf("%d", & numero[contador]);
}
scanf ("%d", & limite);
for (auxiliar_contador=0; auxiliar_contador<contador; auxiliar_contador++){
if (numero[auxiliar_contador]<=limite){
soma=soma+numero[auxiliar_contador];}
if (numero[auxiliar_contador]<=limite){
auxiliar=auxiliar+1;}
}
media = soma;
printf("%.1f \n", media=media/auxiliar);

return 0;
}

