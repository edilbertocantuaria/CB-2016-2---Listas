#include <stdio.h>
#include <string.h>
int main (){
    char texto[100], contador_texto;
    scanf("%s",& texto);
    contador_texto = strlen(&texto);
    for (contador_texto--; contador_texto>=0; contador_texto--){
        printf("%c", texto[contador_texto]);
    }
   printf("\n");
return 0;
}
