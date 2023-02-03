#include <stdio.h>
#include <stdlib.h>

int fi(int p){
if (p%2==1)
    return 1;
else
    return 2;
}
int fp (int p){
if (p%2==0)
    return 1;
else
    return -1;
}
void main(){
int lin, col;
char simbolo;
for (lin=0; lin<10; lin++){
    if (fp(lin)!=1)
        simbolo = 'A';
    else
        simbolo = 'B';

    col =0;
    do{
        printf("%c ", simbolo);
        col = col + fi(col);
    }while (col<=lin);
    printf("\n");
}
}
