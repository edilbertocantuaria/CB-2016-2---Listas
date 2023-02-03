#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *arq = fopen("pontos.dat", "r");
        if(arq==NULL)
            return 1;
    int x1, y1;
    int x2, y2;
    int x, y;
    int n1, n2, n, i;
    double md=0.0, d;
    int a, b, c;

    scanf("%d", &n1);
    scanf("%d", &n2);

    while(fscanf(arq, "%d %d %d", &n, &x, &y)!=EOF){
        if(n==n1){
            x1=x;
            y1=y;
        }
        else if(n==n2){
            x2=x;
            y2=y;
        }
    }
    fseek(arq, 0, SEEK_SET);

    a=y1-y2;
    b=x2-x1;
    c=x1*y2-x2*y1;

    while(fscanf(arq, "%d %d %d", &n, &x, &y)!=EOF){
        if(n!=n1 && n!=n2){
            d=(a*x+b*y+c);
            d/=sqrt(a*a+b*b);
            if(d<md || md==0.0){
                md=d;
                i=n;
            }
        }
    }
    printf("%d\n", i);
    fclose(arq);
    return 0;
}
