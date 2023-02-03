#include <stdio.h>

int main (){

FILE *arq;
char titulo[100];
double orcamento;
int id, gen, ano, dur, ind =1;

arq = fopen("locadora.dat", "w");
if (arq == NULL)
    return 1;
while (1)
{
    scanf("%s", titulo);
    if (strcmp(titulo, "FIM")==0)
        break;
    scanf("%lf", &orcamento);
    scanf("%d", &id);
    scanf("%d", &gen);
    scanf("%d", &ano);
    scanf("%d", &dur);
    fprintf(arq,"%d %s %.0f %d %d %d \n", ind, titulo, orcamento, id, gen, ano, dur);
    ind++;
}
fclose(arq);
return 0;
}
