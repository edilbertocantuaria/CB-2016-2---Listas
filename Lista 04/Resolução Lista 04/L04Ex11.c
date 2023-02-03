#include <stdio.h>
int main (){
int numero[500],contador, x, y=0;

for (contador=0; contador<500; contador++){
    scanf("%d", & numero[contador]);
}
for (contador=0; contador<500; contador++){
     for (x=0; x<contador; x++){
        if (numero[contador]== numero[x]){
                y++;
        break;}
if (y==0){
    printf("%d ", numero[contador]);}
    else
        y=0;}}
printf("\n");
return 0;
}

