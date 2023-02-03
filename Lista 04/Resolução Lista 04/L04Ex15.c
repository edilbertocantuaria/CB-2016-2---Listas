#include <stdio.h>
#include <string.h>
int main (){
    char texto_1[100], texto_2[100], contador_texto, x;
    scanf("%s %s",& texto_1, &texto_2);
    contador_texto = strcmp(texto_1, texto_2);

    if (contador_texto<=0)
        contador_texto = strlen (texto_2);
    else
        contador_texto = strlen (texto_1);
for (x=0; x<contador_texto; x++){
    if (x<strlen(texto_1))
        printf("%c", texto_1[x]);
    if (x<strlen(texto_2))
        printf("%c", texto_2[x]);
}
   printf("\n");
return 0;
}
