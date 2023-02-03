#include <stdio.h>
int main (){
    int l, c, ms, ml, s;
    ms = -32767;
    int M[5][3];
    for (l=0;l<5;l++){
        s=0;
        for (c=0; c<3; c++){
            scanf ("%d",&M[l][c]);
            s += M[l][c];
        }
       // s += M[l][c];
    if (ms<s){
        ms = s;
        ml= l;
    }
    }
printf ("%d", ml);

return 0;
}
