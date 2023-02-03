#include<stdio.h>
int main(){
  int quantidade_produto;
  double valor, valor_total = 0;
    scanf("%d", &quantidade_produto);
  while(quantidade_produto > 0){
        scanf("%lf", &valor);
  while (valor < 0.0){
        scanf("%lf", &valor);
        }
        valor_total += valor * quantidade_produto;
        scanf("%d", &quantidade_produto);
        }
    printf("%.2lf\n", valor_total);
    return 0;
}
