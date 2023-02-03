#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double pv, m=0, lucro=0;

    for(i=0; i<12; i++)
    {
        scanf("%lf", &pv);
        lucro+=pv;
        if(lucro>10000){
    		lucro*=1.0225;
		}
		else{
    		lucro*=1.0175;
		}

        m+=pv;
    }
    lucro-=m;
    printf("%.2lf\n", lucro);
    return 0;
}

