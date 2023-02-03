#include <stdio.h>
int main (){
	int matriz_a[7][7], quadrante_1, quadrante_2, quadrante_3, quadrante_4, linha, coluna, soma=0, soma_cruz, soma_coluna, soma_linha;
	for (linha=0; linha<7; linha++){
		for (coluna=0; coluna<7; coluna++){
			scanf("%d",& matriz_a[linha][coluna]);
		}
	}
	soma_coluna = matriz_a[0][3] + matriz_a[1][3] +  matriz_a[2][3] +  matriz_a[3][3] +  matriz_a[4][3] +  matriz_a[5][3] +  matriz_a[6][3]; 
	soma_linha = matriz_a[3][0] + matriz_a[3][1] +  matriz_a[3][2] +  matriz_a[3][3] +  matriz_a[3][4] +  matriz_a[3][5] +  matriz_a[3][6];
	soma_cruz = soma_coluna + soma_linha;
	quadrante_1 = matriz_a[0][0] + matriz_a[0][1] +  matriz_a[0][2] + matriz_a[1][0] + matriz_a[1][1] +  matriz_a[1][2] + matriz_a[2][0] + matriz_a[2][1] +  matriz_a[2][2];
	quadrante_2 = matriz_a[0][4] + matriz_a[0][5] +  matriz_a[0][6] + matriz_a[1][4] + matriz_a[1][5] +  matriz_a[1][6] + matriz_a[2][4] + matriz_a[2][5] +  matriz_a[2][6];
	quadrante_3 = matriz_a[4][0] + matriz_a[4][1] +  matriz_a[4][2] + matriz_a[5][0] + matriz_a[5][1] +  matriz_a[5][2] + matriz_a[6][0] + matriz_a[6][1] +  matriz_a[6][2]; 
	quadrante_4 = matriz_a[4][4] + matriz_a[4][5] +  matriz_a[4][6] + matriz_a[5][4] + matriz_a[5][5] +  matriz_a[5][6] + matriz_a[6][4] + matriz_a[6][5] +  matriz_a[6][6];  ;
	
	if (quadrante_1>soma_cruz) soma = soma + quadrante_1;
	if (quadrante_2>soma_cruz) soma = soma + quadrante_2;
	if (quadrante_3>soma_cruz) soma = soma + quadrante_3;
	if (quadrante_4>soma_cruz) soma = soma + quadrante_4;
	printf ("%d\n", soma);
	return 0;
}
