#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i, n, nm=0, rm=0, rs=0, rp=0;

    for(i=0; i<6; i++)
    {
        scanf("%lf", &n);
        rs+=n;
        if(n>nm)
        {
            nm=n;
        }
        rm+=n;
    }
    rm/=6;
    rp=1/rs;

    rm=nm-rm;

    printf("%.4lf %.4lf %.4lf\n",rs,rp,rm);
    return 0;
}
