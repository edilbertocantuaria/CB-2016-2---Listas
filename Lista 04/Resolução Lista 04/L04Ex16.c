#include <stdio.h>
#include <string.h>
int main (){
    char texto_1[100];
    int caracter, x, contador_texto;
    scanf("%s",& texto_1);
    contador_texto = strlen(texto_1);
for (caracter=0; caracter<5; caracter++){
    for (x=0; x<contador_texto; x++){
        if (texto_1[x]=='a' || texto_1[x]=='e' || texto_1[x]=='i' || texto_1[x]=='o' || texto_1[x]=='u' || texto_1[x]=='A' || texto_1[x]=='E' || texto_1[x]=='I' || texto_1[x]=='O' || texto_1[x]=='U' ){
            switch (caracter){
                case 0:
                    printf("a");
                    break;
                case 1:
                    printf("e");
                    break;
                case 2:
                    printf("i");
                    break;
                case 3:
                    printf("o");
                    break;
                case 4:
                    printf("u");
                    break;
               }
        }
    else
        printf("%c", texto_1[x]);
    }
      printf("\n");
}
  printf("\n");
return 0;
}
