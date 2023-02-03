#include <stdio.h>
#include <stdlib.h>
int main(){
    int matriz_a[4][5],matriz_b[4][5], linha, coluna;
    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            scanf("%d", &matriz_a[linha][coluna]);
        }
    }
    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            scanf("%d", &matriz_b[linha][coluna]);
        }
    }
for (linha=0; linha<4; linha++){
    for (coluna=0; coluna<4; coluna++){
        printf("%d ", matriz_a[linha][coluna]+ matriz_b[linha][coluna]);
    }
     printf("\n");
}

    return 0;
}
