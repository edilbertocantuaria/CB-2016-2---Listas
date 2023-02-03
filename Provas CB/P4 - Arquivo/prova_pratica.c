#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contadorato
{
    int id;
    char nome[50];
    int ano;
    int mes;
    int dia;
    char t_movel[12];
    char t_fixo[11];
    char email[100];
} contadorATO_T;

int getLastID(FILE *pFile)
{
    contadorATO_T c;
    int id = -1;
    fseek( pFile, 0, SEEK_SET );
    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF)
    {
        id = c.id;
    }
    return id;
}

char readchar()
{
    char c;
    do
    {
        c = getchar();
    }
    while (c == '\n');
    return(c);
}

void imprimir_agenda(FILE *pFile)
{
    contadorATO_T c;
    int registro = 0;

    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF)
    {
        printf("\n\ncontadorato [%d]\nNome: %s\nNascimento: %02d\\%02d\\%04d\nEmail: %s\nMovel: %s\t Fixo: %s", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
        registro++;
    }

    if (registro ==0)
        printf("\nAGENDA VAZIA\n");
}

void inserir_contadorato(FILE *pFile)
{
    contadorATO_T c;
    int last_id = -1;
    last_id = getLastID(pFile);
    c.id = last_id +1;
    printf("Entre o contadorato [%d]",c.id);
    printf("\nNome: ");
    scanf("%s",c.nome);
    printf("Nascimento dia mes ano: ");
    scanf("%d %d %d",&c.dia, &c.mes, &c.ano);
    printf("Email: ");
    scanf("%s",c.email);
    printf("Movel(11) e fixo(10): ");
    scanf("%s %s",c.t_movel,c.t_fixo);
    fprintf(pFile,"\n%d %s %d %d %d %s %s %s", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
}

void excluir_contadorato(FILE *pFile)
{
    int id;
    int encontadorrou = 0;
    FILE *newFile = fopen("temp.dat","w+");
    contadorATO_T c;
    printf("Informe o id do contadorato a ser excluido: ");
    scanf("%d", &id);
    fseek( pFile, 0, SEEK_SET );
    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF)
    {
        if(c.id != id)
        {
            fprintf(newFile,"%d %s %d %d %d %s %s %s\n", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
        }
        else
        {
            encontadorrou = 1;
        }
    }
    fclose(newFile);
    if (encontadorrou)
    {
        fclose(pFile);
        if (remove("agenda.dat")==0)
            if (rename("temp.dat","agenda.dat")!=0)
            {
                printf("PROBLEMAS NA GRAVACAO DO ARQUIVO");
            }
        pFile = fopen("agenda.dat", "r+");
        printf("REGISTRO APAGADO COM SUCESSO");
    }
    else
    {
        printf("REGISTRO NAO ENcontadorRADO");
    }
}

void editar_contadorato(FILE * pFile)
{
    int id;
    int encontadorrou = 0;
    FILE *newFile = fopen("temp.dat","w+");
    contadorATO_T c;
    printf("Informe o id do contadorato a ser editado: ");
    scanf("%d", &id);
    fseek( pFile, 0, SEEK_SET );
    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF)
    {
        if(c.id != id)
        {
            fprintf(newFile,"%d %s %d %d %d %s %s %s\n", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
        }
        else
        {
            printf("\nNome: %s\nForneca o novo nome: ", c.nome);
            scanf("%s",c.nome);
            printf("Nascimento dia mes ano: %02d %02d %04d\nForneca dia mes ano: ",c.dia, c.mes, c.ano);
            scanf("%d %d %d",&c.dia, &c.mes, &c.ano);
            printf("Email: %s\n Forneca email: ", c.email);
            scanf("%s",c.email);
            printf("Movel(11) %s fixo(10): %s\nForneca Movel(11) e fixo(10): ",c.t_movel,c.t_fixo );
            scanf("%s %s",c.t_movel,c.t_fixo);
            fprintf(newFile,"%d %s %d %d %d %s %s %s\n", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
            encontadorrou = 1;
        }
    }
    fclose(newFile);
    if (encontadorrou)
    {
        fclose(pFile);
        if (remove("agenda.dat")==0)
            if (rename("temp.dat","agenda.dat")!=0)
            {
                printf("PROBLEMAS NA GRAVACAO DO ARQUIVO");
            }
        pFile = fopen("agenda.dat", "r+");
        printf("REGISTRO ALTERADO COM SUCESSO");
    }
    else
    {
        printf("contadorATO NAO ENcontadorRADO");
    }
}

/// A SUA MUDANCA DEVE SE CONCENTRAR EXCLUVIVAMENTE A ESTA FUNCAO !!!
void adicionar_digito9_ao_telefone(FILE * pFile)
{
    contadorATO_T c;
    FILE *pProv=fopen("temp.dat","w+");
    char prov[13];
    int x, contador=0;

    while(fscanf(pFile, "%d %s %d %d %d %s %s %s", &c.id, c.nome, &c.dia, &c.mes, &c.ano, c.email, c.t_movel, c.t_fixo)!=EOF){

        for(x=0; x<13; x++){
            if(x<2)
                prov[x]=c.t_movel[x];
            else if(x==2)
                prov[x]='9';
            else
                prov[x]=c.t_movel[x+1];
        }

        fprintf(pProv, "%d %s %d %d %d %s %s %s\n", c.id, c.nome, c.dia, c.mes, c.ano, c.email, prov, c.t_fixo);
        contador++;
    }
    fclose(pProv);
    if(contador==c.id)
    {
        fclose(pFile);
        if (remove("agenda.dat")==0){
            if (rename("temp.dat","agenda.dat")!=0)
            {
                printf("PROBLEMAS NA GRAVACAO DO ARQUIVO");
            }
            else
                printf("DIGITO 9 ADICIONADO AOS CELULARES");
        }
        else
            printf("PROBLEMAS NA GRAVACAO DO ARQUIVO");
        pFile = fopen("agenda.dat", "r+");

    }
    else
        printf("ERRO AO ADICIONAR O 9 DIGITO");

}

int main()
{
    int opcao = 0;
    FILE * pFileAgenda;

    while (1)
    {
        printf("\n\n");
        printf("\n\nMENU DE OPERACOES NA AGENDA\n\n");
        printf("(1) Imprimir agenda\t\t(2) Inserir contadorato\n\n");
        printf("(3) Excluir contadorato\t\t(4) Editar contadorato\n\n");
        printf("(5) Adicionar digito 9\t\t(6) Sair do programa\n\n\n");

        pFileAgenda = fopen("agenda.dat", "r+");
        if (pFileAgenda == NULL)
        {
            pFileAgenda = fopen("agenda.dat", "w+");
            if (pFileAgenda == NULL)
            {
                printf("Problemas com a abertura do arquivo de dados da agenda");
                exit(0);
            }
        }

        do
        {
            printf("Digite a opcao desejada: ");
            opcao = readchar();
            if (feof(stdin)) break;
        }
        while (opcao < '1'  ||  opcao > '6');

        if (feof(stdin))
        {
            printf("EOF encontadorrado. Saindo ...\n\n\n");
            break;
        }

        switch (opcao)
        {
        case '1':
            imprimir_agenda(pFileAgenda);
            break;
        case '2':
            inserir_contadorato(pFileAgenda);
            break;
        case '3':
            excluir_contadorato(pFileAgenda);
            break;
        case '4':
            editar_contadorato(pFileAgenda);
            break;
        case '5':
            adicionar_digito9_ao_telefone(pFileAgenda);
            break;
        case '6':
            break;
        default:
            break;
        }

        if (opcao == '6')
        {
            printf("O usuario pediu para sair do programa. Saindo ...\n\n\n");
            break;
        }
        fclose(pFileAgenda);
    }

    exit(0);
}
