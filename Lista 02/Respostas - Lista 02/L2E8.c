#include <stdio.h>
#include <math.h>
int main (){
double sm, credito;
    scanf ("%lf", &sm);

   if (sm<=500){
        credito = 0.0*sm;
        printf ("%.2lf \n", credito);
   }
   else if (500<sm && sm<=1000){
        credito = 0.3*sm;
        printf ("%.2lf \n", credito);
   }
    else if (1000<sm && sm<=3000){
        credito = 0.4*sm;
        printf ("%.2lf \n", credito);
    }
    else if (sm>3000){
        credito = 0.5*sm;
        printf ("%.2lf \n", credito);
    }

return (0);
        }


