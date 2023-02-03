#include <stdio.h>
int main()
{
    int cont, num_1, maior, menor;
    scanf("%d", &num_1);
    maior=num_1;
    scanf("%d", &num_1);
    if(maior>num_1)
    {
        menor=num_1;
    }
    else
    {
        menor=maior;
        maior=num_1;
    }
    for(cont=0;cont<18;cont++)
    {
        scanf("%d", &num_1);
        if(num_1>maior)
        {
            maior=num_1;
        }
        else if(num_1<menor){
            menor=num_1;
        }
    }
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    return 0;
}
