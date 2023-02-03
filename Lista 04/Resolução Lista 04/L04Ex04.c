#include <stdio.h>
int main (){
int numero[87], limite, contador, auxiliar_contador, auxiliar=0 ;
for (contador=0; contador<87; contador++){
    scanf("%d", & numero[contador]);
    if (numero[contador]==0)
        break;
            else auxiliar++;
}

scanf ("%d", & limite);
for (auxiliar_contador=0; auxiliar_contador<=auxiliar; auxiliar_contador++){
    if (numero[auxiliar_contador]>limite)
        printf("%d ", numero[auxiliar_contador]);

}
printf("\n");
return 0;
}
