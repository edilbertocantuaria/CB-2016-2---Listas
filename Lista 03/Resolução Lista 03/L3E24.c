#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, z=0, y=1;
    long int n1, soma=0;
    scanf("%ld", &n1);
    if(n1%3==0)
    {
        for(i=1;i<=n1;i++)
        {
                if(y==1)
                {
                	soma+=2*powl(2,z);
                    y++;

                }
                else if(y==2)
                {
                    soma+=7*powl(3,z);
                    y++;
                }
                else
                {
                     soma+=3*powl(4,z);
                    z++;
                    y=1;
                    //printf ("Soma parcial: %ld", soma);
                }
        }
        printf("%ld\n",soma);
    }
    else
    {
        printf("SEM SOMA\n");
    }
    return 0;
}
