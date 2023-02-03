#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10], y[10], contador_y, contador_x, uniao=0;

    for(contador_y=0; contador_y<10; contador_y++)
    {
        scanf("%d", &x[contador_y]);
    }

    for(contador_y=0; contador_y<10; contador_y++)
    {
        scanf("%d", &y[contador_y]);
    }

    // Uniao
    for(contador_y=0; contador_y<10; contador_y++)
    {
        for(contador_x=0; contador_x<contador_y; contador_x++)
            if(x[contador_y]==x[contador_x]){
                uniao++;
                break;
            }
        if(uniao==0)
            printf("%d ",x[contador_y]);
        else
            uniao=0;
    }
    for(contador_y=0; contador_y<10; contador_y++)
    {
        for(contador_x=0; contador_x<10; contador_x++)
            if(y[contador_y]==x[contador_x] || (contador_x<contador_y && y[contador_y]==y[contador_x])){
                uniao++;
                break;
            }
        if(uniao==0)
            printf("%d ",y[contador_y]);
        else
            uniao=0;
    }
    printf("\n");

    // Diferenca
    for(contador_y=0; contador_y<10; contador_y++)
    {
        for(contador_x=0; contador_x<10; contador_x++)
            if(x[contador_y]==y[contador_x] || (contador_x<contador_y && x[contador_y]==x[contador_x])){
                uniao++;
                break;
            }
        if(uniao==0)
            printf("%d ",x[contador_y]);
        else
            uniao=0;
    }
    printf("\n");

    // Interseccao
    for(contador_y=0; contador_y<10; contador_y++)
    {
        for(contador_x=0; contador_x<10; contador_x++)
            if(x[contador_y]==y[contador_x]){
                uniao++;
                break;
            }
        if(uniao==1){
            printf("%d ",x[contador_y]);
            uniao=0;
        }

    }
    return 0;
}
