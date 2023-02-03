#include <stdio.h>
int main(){
    int pi, pj, dimensao;
    scanf ("%d", & dimensao);
    for (pi=dimensao; pi>=1; pi--){
        for (pj=1; pj<=pow(pi, 2); pj++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
