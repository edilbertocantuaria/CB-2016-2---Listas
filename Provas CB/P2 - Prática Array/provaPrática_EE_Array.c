#include <stdio.h>
int main (){
	int matriz_a[10][10], quadrante_1=0, quadrante_2=0, quadrante_3=0, quadrante_4=0, linha, coluna;
	for (linha=0; linha<10; linha++){
		for (coluna=0; coluna<10; coluna++){
			scanf("%d",& matriz_a[linha][coluna]);
		}
	}


	//quadrante_1
	for (linha=0; linha<=4; linha++){
		for (coluna=0; coluna<=4; coluna++){
       if (matriz_a[linha][coluna] > quadrante_1)
       quadrante_1 = matriz_a[linha][coluna];
       }}


    //quadrante_2
		for (linha=5; linha<=9; linha++){
		for (coluna=0; coluna<=4; coluna++){
       if (matriz_a[linha][coluna] > quadrante_2)
       quadrante_2 = matriz_a[linha][coluna];
       }}


	//quadrante_3
	for (linha=0; linha<=4; linha++){
		for (coluna=5; coluna<=9; coluna++){
       if (matriz_a[linha][coluna] > quadrante_3)
       quadrante_3 = matriz_a[linha][coluna];
       }}


    //quadrante_4
		for (linha=5; linha<=9; linha++){
		for (coluna=5; coluna<=9; coluna++){
       if (matriz_a[linha][coluna] > quadrante_4)
       quadrante_4= matriz_a[linha][coluna];
       }}



    printf("%d\n", quadrante_1);
    printf("%d\n", quadrante_2);
    printf("%d\n", quadrante_3);
    printf("%d\n", quadrante_4);
	return 0;
}
