#include <stdio.h>
#include <string.h>
int main (){
 int matriz[8][8], linha, coluna, soma_diagonal=0, soma_linha=0, linha_final, rlm=0;
 for (linha=0; linha<8; linha++){
    for (coluna=0; coluna<8; coluna++){
        scanf("%d", & matriz[linha][coluna]);
    }
 }
 for (linha=0; linha<8; linha++){
    for (coluna=0; coluna<8; coluna++){
        if (coluna==1) soma_diagonal = soma_diagonal + matriz[linha][coluna];
    }
 }
 for (linha=0; linha<8; linha++){
    for (coluna=0;coluna<8; coluna++){
        soma_linha = soma_linha + matriz [linha][coluna];
    }
    if (soma_linha%soma_diagonal>rlm) rlm=soma_linha%soma_diagonal;
    linha_final=linha;
 }
 printf("%d", linha_final);
  printf("\n");
return 0;
}
