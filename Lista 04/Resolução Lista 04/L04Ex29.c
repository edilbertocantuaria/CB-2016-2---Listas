#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B[10][10], soma=0, linha, coluna;

    for(linha=0; linha<10; linha++)
            for(coluna=0; coluna<10; coluna++)
                    scanf("%d", &B[linha][coluna]);



    for(linha=0; linha<10; linha++)
        for(coluna=0; coluna<10; coluna++){
            if(coluna<=linha)
                soma+=B[linha][coluna];
            else
                break;
        }

    printf("%d\n",soma);

    return 0;
}
