#include<stdio.h>
int main ()
{
int numero, contador_tabuada, resultado;
scanf("%d", & numero);
for (contador_tabuada=1; contador_tabuada<=10; contador_tabuada++){
    resultado = numero*contador_tabuada;
    printf("%dx%d=%d\n", numero, contador_tabuada, resultado);
}
return (0);
}
