#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v=0, t, mv, mt=0, pv, pt=0, tt=0, p=0;
    do
    {
        scanf("%d", &t);
        if(t<0){
            p=t;
        }
        else if(t>0){
                v++;
                t-=p;
                p=0;
                if(t>pt){
                    pt=t;
                    pv=v;
                }
                if(t<mt || mt==0){
                    mt=t;
                    mv=v;
                }
                tt+=t;
        }
    }while(t!=0);
    printf("Melhor volta: %d - %d seg\n", mv, mt);
    printf("Pior volta: %d - %d seg\n",pv, pt);
    printf("Tempo total: %d seg\n", tt);
    return 0;
}
