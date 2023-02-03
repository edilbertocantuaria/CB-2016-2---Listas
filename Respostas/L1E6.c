#include <stdio.h>
#include <math.h>
int main (){
    double aplicacao, taxa_de_juros, impostos;
scanf ("%lf", & aplicacao);

scanf ("%lf", & taxa_de_juros);

scanf ("%lf", & impostos);
      taxa_de_juros = aplicacao * (taxa_de_juros/100);
      impostos = taxa_de_juros * (impostos/100);
      float aplicacao_final = aplicacao + taxa_de_juros - impostos;
printf("%.2f  ", impostos);
printf ("%.2f \n", aplicacao_final);
return 0;
}
