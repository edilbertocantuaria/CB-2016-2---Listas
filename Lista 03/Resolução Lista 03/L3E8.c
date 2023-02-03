#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int num;
int inverso;
scanf("%d",& num);
if (num<0){
num=num*-1;
printf("-");
    while (1){
         inverso = num%10;
         if(inverso==0 && num==0)
         break;
         printf("%d", inverso);
         num = (num/10);
}
}
if (num>=0){
while (1){
         inverso = num%10;
         if(inverso==0 && num==0)
         break;
         printf("%d", inverso);
         num = (num/10);
}
}
return 0;
}

