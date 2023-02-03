#include<stdio.h>
int main ()
{
    int n,numero,maior,menor,i;

    scanf("%d",&n);
    scanf ("%d",&numero);

    maior=numero;
    menor=0;

    scanf ("%d",&numero);

    if (numero>maior)
    {
        menor=maior;
        maior=numero;
    }
    else
    {
        menor=numero;
    }

    for (i=1;i<n-1;i++)
    {
        scanf ("%d",&numero);

        if(numero>maior)
        {
            maior=numero;
        }
        if (numero<menor)
        {
            menor=numero;
        }

    }
    printf("Menor: %d\n",menor);
    printf("Maior: %d\n",maior);

    return 0;
}
