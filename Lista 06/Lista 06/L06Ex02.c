#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica(int cr, double p1, double p2)
{
    switch(cr)
    {
    case 0:
        return 0;
        break;
    case 1:
        if(p1<p2)
            return 0;
        break;
    case 2:
        if(p1>p2)
            return 0;
        break;
    case 3:
        if(p1==p2)
            return 0;
        break;
    case 4:
        if(p1!=p2)
            return 0;
        break;
    }
    return 1;
}

int main()
{
    FILE *arq;
    char TITLE[100];
    double ORC, fORC;
    int MA, MI, MD, MO, DUR, fDUR, ANO, fANO, IDIOMA, fIDIOMA, fGEN, id, ind;

    while(1)
    {
        arq = fopen("locadora.dat", "r");
        if(arq==NULL)
            return 1;
        scanf("%d", &ANO);
        if(ANO<0)
            break;
        scanf("%d", &MA);
        scanf("%d", &IDIOMA);
        scanf("%d", &MI);
        scanf("%lf", &ORC);
        scanf("%d", &MO);
        scanf("%d", &DUR);
        scanf("%d", &MD);
        while(fscanf(arq, "%d %s %lf %d %d %d %d", &id, TITLE, &fORC, &fIDIOMA, &fGEN, &fANO, &fDUR)!=EOF)
        {
            ind=0;
            ind+=verifica(MA, fANO, ANO);
            ind+=verifica(MI, fIDIOMA, IDIOMA);
            ind+=verifica(MO, fORC, ORC);
            ind+=verifica(MD, fDUR, DUR);
            if(ind==0)
                printf("%s\n", TITLE);

        }
    }
    fclose(arq);
    return 0;
}

