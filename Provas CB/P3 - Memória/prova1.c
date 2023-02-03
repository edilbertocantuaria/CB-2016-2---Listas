#include <stdio.h>
int main (){
    int l, c, s=0;
    int M[5][5];
    for (l=0;l<5;l++){

        for (c=0; c<5; c++){
            scanf ("%d",&M[l][c]);
        }
        s += M[l][l];
    }
printf ("%d", s);

return 0;}
