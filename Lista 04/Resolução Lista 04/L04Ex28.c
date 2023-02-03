#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B[9][9], valor_principal, linha, coluna;

    for(linha=0; linha<9; linha++)
            for(coluna=0; coluna<9; coluna++)
                    scanf("%d", &B[linha][coluna]);

    for(linha=0; linha<9; linha++)
    {
            valor_principal=B[linha][linha];
            B[linha][linha]=B[(8-linha)][linha];
            B[(8-linha)][linha]=valor_principal;
    }

    for(linha=0; linha<9; linha++){
            for(coluna=0; coluna<9; coluna++)
                    printf("%d ", B[linha][coluna]);
            printf("\n");
    }

    return 0;
}
