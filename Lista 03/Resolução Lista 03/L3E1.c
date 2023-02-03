#include <stdio.h>
#include <math.h>
int main(){
double peso, i, var2 = 0;

for (i=0; i<=24; i++){
    scanf("%lf", &peso);
    var2 = var2 + peso;
}
printf("%.1lf \n", var2);
return 0;
}

