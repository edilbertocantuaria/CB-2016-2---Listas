#include <stdio.h>
#include <math.h>
int main (){
int idade;
    scanf ("%d", &idade);

    if (idade<5 ){

        printf ("SEM CATEGORIA \n" );
   }

   else if (idade>=5 && idade <=7)
    {

        printf ("INFANTIL A \n" );
   }
   else if (idade>=8 && idade <=10)
   {

        printf ("INFANTIL B \n" );
   }
   else if (idade>=11 && idade <=13)
    {

        printf ("JUVENIL A \n" );
   }
   else if (idade>=14 && idade <=17)
    {

        printf ("JUVENIL B \n" );
   }
   else if (idade>=18)
    {

        printf ("SENIOR \n" );
   }

return (0);
        }


