#include <stdio.h>
int main (){
int numero[106], limite, contador, auxiliar, auxiliar_contador, soma=0;
for (contador=0; contador<106; contador++){
    scanf("%d", & numero[contador]);
if (numero[contador]==0)
        break;

}
scanf ("%d", & limite);
for (auxiliar_contador=0; auxiliar_contador<contador; auxiliar_contador++){
if (numero[auxiliar_contador]<=limite)
soma = soma+ numero[auxiliar_contador];

}
printf("%d \n", soma);
return 0;
}

