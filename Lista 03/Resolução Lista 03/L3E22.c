#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v, ce, me, pe;
    double mc=0, pc=0, c;
    for(v=0; v<10; v++)
    {
        scanf("%d", &ce);
        scanf("%lf", &c);
        if(c<=5000){
            c*=0.015;
        }
        else if(c<15000){
            c*=0.035;
        }
        else{
            c*=0.047;
        }
        if(c<pc || pc==0){
            pc=c;
            pe=ce;
        }
        if(c>mc){
            mc=c;
            me=ce;
        }
    }
    printf("%d %.2lf %d %.2lf\n", me, mc, pe, pc);
    return 0;
}
