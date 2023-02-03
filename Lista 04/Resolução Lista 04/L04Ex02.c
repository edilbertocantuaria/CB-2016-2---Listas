#include <stdio.h>
int main (){
int numero[300], contador;
    for (contador=0; contador<300; contador++){
    scanf("%d", & numero[contador]);
    if (numero[contador]<0)
        break;
        }

for (contador--; contador>=0; contador--) {
    printf("%d ", numero[contador]);

}
printf("\n");
return 0;
}
