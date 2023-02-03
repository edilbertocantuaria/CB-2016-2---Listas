#include <stdio.h>
#include <math.h>
int main (){
    double salario1;
scanf ("%lf", & salario1);
        double gratificacao = ((salario1*0.05));
        double imposto = ((salario1*0.07));
        double sf = salario1 + gratificacao - imposto;
printf ("%.2lf\n", sf);
return 0;
}
