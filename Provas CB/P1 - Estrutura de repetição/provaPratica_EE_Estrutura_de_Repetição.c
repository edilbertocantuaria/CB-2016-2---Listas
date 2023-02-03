#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, x;
    scanf("%d", &n);
    if(n%2==0){
        for(i=1; i<=n; i++){
            for(x=1; x<=n; x++){
                if(x==i || x==(n-(i-1)) || x==1 || x==n || i==1 || i==n){
                    printf("#");
                } else{
                    printf("-");
                }
            }
            printf("\n");
        }
    }
    else{
        for(i=1; i<=n; i++){
            for(x=1; x<=n; x++){
                if(x==((n/2)+1) || x==1 || x==n || i==1 || i==n || i==((n/2)+1)){
                    printf("#");
                } else{
                    printf("-");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
