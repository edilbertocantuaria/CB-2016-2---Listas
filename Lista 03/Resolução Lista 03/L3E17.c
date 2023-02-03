#include <stdio.h>

int main(){
    int cont, velocidade, lesmas=0, num=1;
do{
        scanf("%d",&num);
   }while(num<1 || num>500);

for(cont=0; cont<num; cont++){
    do{
    scanf("%d",&velocidade);
      }while(velocidade<1 || velocidade>50);

        if(velocidade>=1 && velocidade<10 && lesmas<1){
                lesmas=1;}
        else if(velocidade>=10 && velocidade<20 && lesmas<2){
                lesmas=2; }
        else if(velocidade>=20 && velocidade<=50){
                lesmas=3;}}
    printf("%d", lesmas);
    return 0;
}
