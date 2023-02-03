#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int matriz[4][5], linha, coluna, linha_maior, coluna_maior, maior_numero=0;
    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            if(matriz[linha][coluna]>maior_numero || maior_numero==0)
            {
                coluna_maior=coluna;
                linha_maior=linha;
                maior_numero=matriz[linha][coluna];
            }
        }
    }

    printf("%d %d %d", maior_numero, linha_maior, coluna_maior);
    return 0;
}
