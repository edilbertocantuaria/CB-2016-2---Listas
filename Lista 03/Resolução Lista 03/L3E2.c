#include <stdio.h>
#include <math.h>
int main(){
int horas, i, var2 = 0;

for (i=0; i<=29; i++){
    scanf("%d", &horas);
    var2 = var2 + horas;
}

printf("%d", var2);
return 0;
}

