#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B[15][5], menor_valor=0, linha, coluna;

    for(linha=0; linha<15; linha++)
    {
            for(coluna=0; coluna<5; coluna++)
            {
                    scanf("%d", &B[linha][coluna]);
            }
    }

    for(linha=0; linha<15; linha++)
    {
            for(coluna=0; coluna<5; coluna++)
                    if(menor_valor>B[linha][coluna] || menor_valor==0 )
                        menor_valor=B[linha][coluna];

            for(coluna=0; coluna<5; coluna++){
                if((B[linha][coluna]-menor_valor)<10)
                    printf("0");
                printf("%d ",(B[linha][coluna]-menor_valor));
            }
            printf("\n");
            menor_valor=0;
    }
    return 0;
}
