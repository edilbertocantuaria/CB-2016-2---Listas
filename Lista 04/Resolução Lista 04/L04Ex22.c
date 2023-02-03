#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int matriz[7][7], linha, coluna, diagonal=0;
    for(linha=0; linha<7; linha++)
    {
        for(coluna=0; coluna<7; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha=0; linha<7; linha++)
    {
        for(coluna=0; coluna<7; coluna++)
        {
            if(linha==coluna)
            {
               diagonal = diagonal+matriz[linha][coluna];
            }
        }
    }

    printf("%d\n", diagonal);
    return 0;
}
