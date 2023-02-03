#include <stdio.h>
#include <math.h>
    int main (){
    int N1, N2;
    scanf("%d", &N1);
    scanf("%d", &N2);
    float M = (N1+N2)/2;
    if (M>=7.0)
    {
        printf("APROVADO \n");
    }
    else if (M<3.0)
        {
        printf("REPROVADO \n");
        }
    else if (3.0< M<7.0){
        printf("EXAME \n");

    }
return (0);
    }




