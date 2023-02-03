#include <stdio.h>
#include <math.h>
int main (){
float peso, altura, imc;
    scanf ("%f", &peso);
    scanf ("%f", &altura);
    imc = ((peso)/ (altura*altura));
   if (imc<20){
        printf ("ABAIXO \n");
   }
   else if (25>imc && imc>=20){

        printf ("NORMAL \n");

   }
    else if (30>imc && imc>=25){

        printf ("SOBREPESO \n");

    }
    else if (40>imc && imc>=30){
        printf("OBESO \n");
    }
    else if (imc>=40){
        printf("MORBIDO \n");
    }
return (0);
        }


