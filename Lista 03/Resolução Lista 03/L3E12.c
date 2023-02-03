#include<stdio.h>
int main ()
{
int numero;
scanf("%d",&numero);
    while(numero>=0)
    {
        if(numero%2==0)
        {
            printf ("%d: par\n",numero);
        }
        else if (numero==0)
        {
            printf ("0: par\n");
        }
        else
        {
            printf ("%d: impar\n",numero);
        }
    scanf("%d",&numero);
    }
    return 0;
}
