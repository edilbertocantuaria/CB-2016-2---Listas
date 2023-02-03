#include<stdio.h>
int main()
{
    double salario_inicial,salario_final,gasto_salario_inicial,gasto_salario_final;
    gasto_salario_inicial=0,gasto_salario_final=0;
    scanf("%lf",&salario_inicial);
    while (salario_inicial>0)
    {
        if (salario_inicial<500)
        {
            salario_final =(1.15)*salario_inicial;
            printf("%.2lf \n",salario_final);
        }
        if(500<=salario_inicial && salario_inicial<=1000 )
        {
            salario_final =(1.1)*salario_inicial;
            printf("%.2lf \n",salario_final);
        }
        if ( salario_inicial>1000)
        {
            salario_final =(1.05)*salario_inicial;
            printf("%.2lf \n",salario_final);
        }
         gasto_salario_inicial+= salario_inicial;
         gasto_salario_final += salario_final;
         scanf("%lf",&salario_inicial);
    }
    printf("%.2lf \n",gasto_salario_final-gasto_salario_inicial);
    return 0;
}
