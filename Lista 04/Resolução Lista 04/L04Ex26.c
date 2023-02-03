#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B[10][5], soma=0,somaM=0, linha_maior, linha, coluna;

    for(linha=0; linha<10; linha++)
    {
            for(coluna=0; coluna<5; coluna++)
            {
                    scanf("%d", &B[linha][coluna]);
            }
    }

    for(linha=0; linha<10; linha++)
    {
            for(coluna=0; coluna<5; coluna++)
            {
                    soma+=B[linha][coluna];
            }
            if(soma>somaM || somaM==0){
                somaM=soma;
                linha_maior=linha;
            }
            soma=0;
    }
    printf("%d",linha_maior);
    return 0;
}
