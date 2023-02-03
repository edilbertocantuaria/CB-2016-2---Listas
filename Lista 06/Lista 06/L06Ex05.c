#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("pontos.dat", "w");
        if(arq==NULL)
            return 1;
    int x, y, n, cont;

    scanf("%d", &n);

    for(cont=1; cont<=n; cont++){
        scanf("%d", &x);
        scanf("%d", &y);

        fprintf(arq, "%d %d\t%d\n", cont, x, y);
    }

    fclose(arq);
    return 0;
}
