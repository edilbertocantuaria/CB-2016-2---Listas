#include <stdio.h>
#include <stdlib.h>
void funcao (int *pPint, int tam){
    int x;
    for (x=0; x<tam; x++)
        scanf ("%d", &pPint[x]);
}

int main(){

int i, *pPint, y;

scanf ("%d", &i);
pPint =(int*) malloc(i* sizeof (int));

funcao(pPint, i);

    for (y=i-1; y>=0; y--){
        printf("%d ", pPint[y]);
    }

    printf("\n");
    free(pPint);
    pPint = NULL;

return 0;
}
