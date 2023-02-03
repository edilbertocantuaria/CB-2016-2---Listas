#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v=0, t, mv, mt=0, pv, pt=0, tt=0, p=0, nv;

    scanf("%d", &nv);

    while(v<nv)
    {
        scanf("%d", &t);
        if(t<0){
            switch(t){
            case -1:
                p=10;
                break;
            case -2:
                p=25;
                break;
            case -3:
                p=40;
                break;
            }
        }
        else if(t>0){
                    v++;
                t+=p;
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
    }
    printf("Melhor volta: %d - %d seg\n", mv, mt);
    printf("Pior volta: %d - %d seg\n",pv, pt);
    printf("Tempo total: %d seg\n", tt);
    return 0;
}
