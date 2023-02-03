#include <stdio.h>
#include <math.h>
        int main (){
        int ano_nascimento, ano_atual, idade_hoje, idade_2017;
scanf ("%d", & ano_nascimento);
scanf ("%d", & ano_atual);
  idade_hoje = ano_atual - ano_nascimento;
  idade_2017 = (2017 - ano_nascimento);
printf("%d", idade_hoje);
printf("   %d\n", idade_2017);
return 0;
}


