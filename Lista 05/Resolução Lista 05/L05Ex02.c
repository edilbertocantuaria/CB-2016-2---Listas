#include <stdio.h>
#include <stdlib.h>
int AlocaVet (int tam){
    int *pInt;
    pInt = (int*) malloc(tam * sizeof (int));

return pInt;
}

void ImprimeVet(int *pInt, int tam){
int y;

for (y=0; y<tam; y++)
    printf("%d ", pInt [y]);
}

void DesalocaVet( int *pInt){
free (pInt);
pInt = NULL;
}

int main (){
    int n, *pInt, x;

scanf("%d", &n);
    pInt = AlocaVet(n);

for (x=0; x<n; x++)
    scanf("%d", &pInt [x]);

ImprimeVet(pInt, n);
DesalocaVet (pInt);


return 0;
}
