#include <stdio.h>
#include <stdlib.h>
#define LOC "locadora.dat"
#define TEMP "temp.dat"

int main()
{
    char TITLE[100], c;
    double ORC;
    int DUR, ANO, ID, GEN, INDICE, fINDICE;

    while(1)
    {
        FILE *arq = fopen(LOC, "r");
        if(arq==NULL)
            return 1;
        FILE *arq2 = fopen(TEMP, "w");
        if(arq==NULL)
            return 1;
        while(1)
        {
            c = fgetc(arq);
            if(c==EOF)
                break;
            printf("%c", c);
        }
        printf("\n");

        scanf("%d", &fINDICE);
        if(fINDICE<1)
            break;

        fseek(arq, 0, SEEK_SET);
        while(fscanf(arq, "%d %s %lf %d %d %d %d", &INDICE, TITLE, &ORC, &ID, &GEN, &ANO, &DUR)!=EOF)
            if(fINDICE!=INDICE)
                fprintf(arq2, "%d %s %.0lf %d %d %d %d\n",INDICE, TITLE, ORC, ID, GEN, ANO, DUR);

        fclose(arq2);
        fclose(arq);
        remove(LOC);
        rename(TEMP, LOC);
    }

    return 0;
}
