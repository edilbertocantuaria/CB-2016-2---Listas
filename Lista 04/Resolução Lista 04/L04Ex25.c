#include <stdio.h>
#include <stdlib.h>
int main(){
    int matriz_a[9][9], linha, coluna, contador=0;
    for(linha=0; linha<9; linha++){
        for(coluna=0; coluna<9; coluna++){
            scanf("%d", &matriz_a[linha][coluna]);
        }
    }

for (linha=0; linha<9; linha++){
    for (coluna=0; coluna<9; coluna++){
        if (matriz_a[linha][coluna]==matriz_a[coluna][linha])
        contador++;
    }

}
if (contador==81) printf("S");
else printf("N");
printf("\n");
    return 0;
}
