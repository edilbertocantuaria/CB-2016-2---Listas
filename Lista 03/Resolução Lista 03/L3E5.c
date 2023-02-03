#include <stdio.h>
#include <math.h>
int main(){
int T,tempo_menos_1, i, tempo;
double D, TJ, juros_parcial, juros_sem_capital,juros_sem_capital_1,juros_montante, montante;
scanf ("%lf", & D);
scanf ("%lf", & TJ);
scanf ("%d", & T);
TJ = (TJ/100)+1;
tempo_menos_1=T-1;
i=0;
do{
tempo=1;
    do{
    juros_sem_capital = pow(TJ,tempo);
    juros_sem_capital_1 = pow(TJ,(tempo-1));
    juros_parcial = (((D*juros_sem_capital) - D))-(((D*juros_sem_capital_1) - D));
printf("Rendimento no mes %d: %.2lf \n", i, juros_parcial);
i++;
tempo++;
}while (tempo<=T);
} while (i==tempo_menos_1);
juros_montante = pow (TJ, T);
montante = (D*juros_montante);
printf("Saldo final do investimento: %.2lf \n", montante);
return 0;
}

