#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int y=1, x, n1, p=0, f=0;

    scanf("%ld", &n1);

    for(x=2; x<n1; x++)
    {
        if(n1%x==0){
            x=n1;
            p=1;
        }

    }
    for(x=1; y<n1;)
    {
        y+=x;
        x=y-x;
    }
    if(y!=n1){
        f=1;
    }

    if(p==0 && f==0)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
    return 0;
}
