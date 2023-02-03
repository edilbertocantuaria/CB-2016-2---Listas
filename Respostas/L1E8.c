#include <stdio.h>
#include <math.h>
        int main (){
        int numero;
scanf ("%d", & numero );
        int quadrado = (numero*numero);
        int cubo = (numero*numero*numero);
        float raiz_quadrada = pow (numero, (1.0/2.0));
        float raiz_cubica = pow (numero, (1.0/3.0));
printf("%d ", quadrado);
printf("%d ", cubo);
printf("%.1f ",raiz_quadrada);
printf("%.1f", raiz_cubica);
return 0;
}


