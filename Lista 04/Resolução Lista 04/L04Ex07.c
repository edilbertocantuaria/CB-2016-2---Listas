#include <stdio.h>
int main (){
int numero[135], limite, limite_inferior, limite_superior, contador, auxiliar=0, auxiliar_contador, soma=0;
float media;
for (contador=0; contador<135; contador++){
    scanf("%d", & numero[contador]);
}
scanf ("%d", & limite_inferior);
scanf ("%d", & limite_superior);
for (auxiliar_contador=0; auxiliar_contador<contador; auxiliar_contador++){
if (numero[auxiliar_contador]<limite_inferior || numero[auxiliar_contador]>limite_superior){
printf("%d ", numero[auxiliar_contador]);
}
}
printf("\n");
return 0;
}

