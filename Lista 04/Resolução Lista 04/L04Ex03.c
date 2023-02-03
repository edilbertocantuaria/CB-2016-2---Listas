#include <stdio.h>
int main (){
int numero[150], limite, contador=0, auxiliar_contador;
do{
    scanf("%d", & numero[contador]);
    contador++;
}while (contador<150);
scanf ("%d", & limite);
for (auxiliar_contador=0; auxiliar_contador<150; auxiliar_contador++){
    if (numero[auxiliar_contador]<limite)
    printf("%d ", numero[auxiliar_contador]);
}
printf("\n");
return 0;
}

