#include <stdio.h>
#include <math.h>
int main (){
double x, fx;
    scanf ("%lf", &x);

    if (x==1 ){
        fx=1;
        printf ("%.1lf \n", fx );
   }

   else if (x>=1 && x <=2)
    {
        fx=2;
        printf ("%.1lf \n", fx );
   }
   else if (x>=2 && x <=3)
   {
        fx = pow(x,2);
        printf ("%.1lf \n", fx );
   }
   else if (x>3)
    {
        fx = pow(x,3);
        printf ("%.1lf \n", fx );
   }
return (0);
        }


