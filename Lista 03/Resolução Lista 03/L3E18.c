#include <stdio.h>
int main()
{
    int idade, dia_nascimento, mes_nascimento, ano_nascimento, data_hoje, mes_hoje, ano_hoje;
    do{
        scanf("%d", &dia_nascimento);
    }while(dia_nascimento>30 || dia_nascimento<=0);
    do{
        scanf("%d", &mes_nascimento);
    }while(mes_nascimento>12 || mes_nascimento<=0);
    do{
        scanf("%d", &ano_nascimento);
    }while(ano_nascimento>2020 || ano_nascimento<=0);

    do{
        scanf("%d", &data_hoje);
    }while(data_hoje>30 || data_hoje<=0);
    do{
        scanf("%d", &mes_hoje);
    }while(mes_hoje>12 || mes_hoje<=0);
    do{
        scanf("%d", &ano_hoje);

        if(ano_hoje<ano_nascimento){
            ano_hoje=0;}

        else if(ano_hoje==ano_nascimento){
            if(mes_hoje<mes_nascimento){
                ano_hoje=0;}

            else if(mes_hoje==mes_nascimento){
                if(data_hoje<dia_nascimento || data_hoje==dia_nascimento){
                    ano_hoje=0;}
                                            }
        }
     }while(ano_hoje>2020 || ano_hoje<=0);

    if(data_hoje<mes_nascimento){
        data_hoje+=30;
        data_hoje-=dia_nascimento;
        mes_hoje--;}
    else{ data_hoje-=dia_nascimento; }

    if(mes_hoje<mes_nascimento){
        mes_hoje+=12;
        mes_hoje-=mes_nascimento;
        ano_hoje--;}

    else{ mes_hoje-=mes_nascimento; }

    ano_hoje-=ano_nascimento;

    idade=ano_hoje*360+mes_hoje*30+data_hoje;

    printf("%d\n", idade);
    return 0;
}
