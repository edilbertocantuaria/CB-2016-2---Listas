#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int num, i=0;
double soma =0, media=0;
scanf("%d",& num);
do{
    soma = soma+num;
    i=i+1;
    scanf("%d",& num);
}while (num>0);
printf("%.0lf \n", soma);
if (i>=1){
    media = soma/i;
printf("%.1lf \n", media);
}
return 0;
}

