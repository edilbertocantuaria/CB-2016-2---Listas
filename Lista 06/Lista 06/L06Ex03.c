#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("locadora.dat", "r+");
    if(arq==NULL)
        return 1;
    char TITLE[100], c;
    double ORC;
    int DUR, ANO, ID, GEN, INDICE, fINDICE;
    while(1)
    {

        while(1)
        {
            c = fgetc(arq);
            if(c==EOF)
                break;
            printf("%c", c);
        }
        printf("\n");
        fseek(arq, 0, SEEK_SET);

        scanf("%d", &INDICE);
        if(INDICE<1)
            break;
        scanf("%s", TITLE);
        scanf("%lf", &ORC);
        scanf("%d", &ID);
        scanf("%d", &GEN);
        scanf("%d", &ANO);
        scanf("%d", &DUR);

        while(1)
        {
            fscanf(arq, "%d", &fINDICE);
            if(fINDICE==INDICE)
            {
                fseek(arq, -1, SEEK_CUR);
                fprintf(arq, "%d %s %.0lf %d %d %d %d \n",INDICE, TITLE, ORC, ID, GEN, ANO, DUR);
                break;
            }
            else
                while(getc(arq)!=10)
                    if(feof(arq))
                        break;
            if(feof(arq))
                break;
        }
        fflush(arq);
        fseek(arq, 0, SEEK_SET);
    }
    fclose(arq);
    return 0;
}
