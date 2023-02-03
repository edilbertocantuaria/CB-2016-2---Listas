#include <stdio.h>
#include <stdlib.h>

int** AlocaMatInt (int linha, int coluna){

    int **m, i;
    m = (int*) malloc(linha * sizeof(int));

    for (i=0; i<linha; i++)
        m[i]= (int*) malloc(coluna * sizeof (int));

return m;
}


void DesalocaMatrizInt(int **pInt, int linha){

int i;

for (i=0; i<linha; i++)
    free(pInt [i]);
    free (pInt);
    pInt = NULL;
}


int main (){

    int x, y, **pInt, l, c;

scanf("%d", &x);
scanf("%d", &y);

    pInt = AlocaMatInt(x, y);

for (l=0; l<x; l++)
    for (c=0; c<y; c++)
    scanf("%d", &pInt [l][c]);

for (l=0; l<x; l++){
    for (c=0; c<y; c++){
        if (pInt[l][c]<100){
            printf(" ");
            if (pInt[l][c]<10)
                 printf(" ");
        }
        printf(" %d", pInt[l][c]);
    }
    printf("\n");
}

DesalocaMatrizInt(pInt, x);

return 0;
}
