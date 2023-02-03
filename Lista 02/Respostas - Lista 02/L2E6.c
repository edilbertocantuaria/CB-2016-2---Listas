#include <stdio.h>
#include <math.h>
int main (){
int num1;
    scanf ("%d", &num1);
   if (num1<16){
        printf ("NAO ELEITOR \n");
   }
   else if (num1>=18 && num1<65){

        printf ("OBRIGATORIO \n");

   }
    else if (18>num1>=16 || num1>=65){

        printf ("FACULTATIVO \n");

    }
return (0);
        }


