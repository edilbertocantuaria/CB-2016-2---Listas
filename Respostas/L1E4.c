#include <stdio.h>
int main (){
    double salario1;
scanf ("%lf", & salario1);
        double aumento;
scanf ("%lf", & aumento);
        double sf = (salario1*(aumento/100))+ salario1;
        double aumento1 = (salario1*(aumento/100));
printf("%.2lf\n ", aumento1);
printf ("%.2lf", sf);
return 0;
}
