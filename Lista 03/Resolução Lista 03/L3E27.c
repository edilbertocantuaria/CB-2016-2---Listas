#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double i, p, x, xs=0, xs2=0, y, ys=0, ys2=0, xy=0;

    for(i=0; i<10; i++)
    {
        scanf("%lf", &x);
        scanf("%lf", &y);

        xs+=x;
        xs2+=(x*x);

        ys+=y;
        ys2+=(y*y);

        xy+=(x*y);
    }

    p=(10*xy-(xs*ys));
    p/=sqrt(10*xs2-(xs*xs))*sqrt(10*ys2-(ys*ys));

    printf("%.2lf\n",p);

    return 0;
}
