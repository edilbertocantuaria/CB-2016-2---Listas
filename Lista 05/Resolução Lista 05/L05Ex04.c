#include <stdio.h>
#include <stdlib.h>

int AlocaMatInt (int linha, int coluna){

    int **m, i;
    m = (int**) malloc(linha * sizeof(int));

    for (i=0; i<linha; i++)
        m[i]= (int) malloc(coluna * sizeof (int));

return m;
}


void DesalocaMatrizInt(int **ppMatInt, int linha){

int i;

for (i=0; i<linha; i++)
    free(ppMatInt [i]);
    free (ppMatInt);
    ppMatInt = NULL;
}


int main (){

    int x, y, **pMatInt, l, c;

scanf("%d", &x);
scanf("%d", &y);

    pMatInt = AlocaMatInt(x, y);

for (l=0; l<x; l++)
    for (c=0; c<y; c++)
    scanf("%d", &pMatInt [l][c]);

for (l=x-1; l>=0; l--){
    for (c=y-1; c>=0; c--){
        if (pMatInt[l][c]<10){
            printf(" ");
        }
        printf(" %d", pMatInt[l][c]);
    }
    printf("\n");
}

DesalocaMatrizInt(pMatInt, x);

return 0;
}
