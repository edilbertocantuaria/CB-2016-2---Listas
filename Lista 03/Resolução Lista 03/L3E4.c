#include <stdio.h>
#include <math.h>
int  main(){
int n, var2;
scanf ("%d", & n);
if (n==0){
    printf("1 \n");
}
else if (n<0){

    printf("Nao existe \n");
}

else{
for (var2=1; n>1; n--){
    var2 = var2*n;
}
printf("%d \n", var2);

}
return 0;
}
