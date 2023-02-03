#include <stdio.h>
#include <stdlib.h>
int main(){
    int matriz_a[7][9], linha, coluna;
    for(linha=0; linha<7; linha++)
    {
        for(coluna=0; coluna<9; coluna++)
        {
            scanf("%d", &matriz_a[linha][coluna]);
        }
    }

for (linha=0; linha<9; linha++){
    for (coluna=0; coluna<7; coluna++){
        printf("%d ", matriz_a[coluna][linha]);
    }
     printf("\n");
}

    return 0;
}
