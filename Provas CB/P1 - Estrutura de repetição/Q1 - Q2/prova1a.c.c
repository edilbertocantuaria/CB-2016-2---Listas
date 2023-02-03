#include <stdio.h>
int main (){
int idade, sexo, classe;
scanf("%d %d %d", &idade, &sexo, &classe);
if ((classe>1 && sexo==1)|| (idade>15 && idade<=45)){
    printf("Morreu \n");
}
else {
    printf("Sobreviveu \n");
}
return 0; //não coloquei o 'return 0;' na prova
}
