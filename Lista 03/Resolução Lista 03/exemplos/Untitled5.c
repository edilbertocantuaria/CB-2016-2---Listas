#include <stdio.h>

int main()
{
    int vetor[17], cont;
    int soma=0, mult=1;

    for(cont=0; cont<17; cont++)
    {
        printf("Digite o valor %d : ", cont+1);
        scanf("%d",&vetor[cont]);
        //fflush(stdin);
    }

    for(cont=0; cont<17; cont++)
    {
        if((vetor[cont]>20) && (((vetor[cont])%2) == 0))
        {
            soma += vetor[cont];
            mult *= vetor[cont];
        }
    }

    printf("\nA soma dos pares maiores que 20 eh %d.\n", soma);
    printf("A multiplicacao dos pares maiores que 20 eh %d.\n\n", mult);

    system("pause");

    return(0);
}
