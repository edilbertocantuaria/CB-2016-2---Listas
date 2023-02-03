#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, n1, f=1, y=0, z=0;

    do{
        scanf("%d",&n1);
    }while(n1<0);

    if(n1>0)
    {
        for(i=1; i<=n1; i++)
        {
            f*=i;
        }
    }
    else if(n1==0)
    {
        f=1;
    }

    for(i=2; i<f; i++)
    {
        for(x=2; x<i; x++)
        {
            if(i%x==0){
                x=i;
                z=1;
            }

        }
        if(z==0){
            printf("%ld ",i);
            y=1;
        }
        z=0;
    }
    if(y==0){
        printf("NENHUM PRIMO");
    }
    printf("\n");
    return 0;
}
