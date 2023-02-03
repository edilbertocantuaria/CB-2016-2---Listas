#include<stdio.h>
int main()
{
  int quantidade_comodos,largura,comprimento ,area=0,area_total=0,cont;
scanf("%d",&quantidade_comodos);
  for(cont=1;cont<=quantidade_comodos;cont++){
        scanf("%d %d",&largura,&comprimento );
        area=largura * comprimento ;
        area_total +=area;
    }
printf("%d\n",area_total);
  return 0;
}
