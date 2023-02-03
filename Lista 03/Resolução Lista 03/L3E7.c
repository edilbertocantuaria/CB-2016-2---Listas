#include <stdio.h>
#include <math.h>
int main(){
int menor_temperatura, maior_temperatura;
double celsius;
scanf("%d",& menor_temperatura);
scanf("%d",& maior_temperatura);
while (menor_temperatura<=maior_temperatura){
        celsius= (((menor_temperatura)-(32))*0.5555555555);
printf("%d F : %.1lf C\n",menor_temperatura, celsius);
menor_temperatura= menor_temperatura+1;
        }
return 0;
}


