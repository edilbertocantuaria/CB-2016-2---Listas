#include <stdio.h>
#include <stdlib.h>

typedef struct Contato
{
    int id;
    char nome[50];
    int ano;
    int mes;
    int dia;
    char t_movel[12];
    char t_fixo[11];
    char email[100];
} CONTATO_T;


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
    CONTATO_T c;
    int conta_registro = 0;

    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF)
    {
        printf("\n\nContato [%d]\nNome: %s\nNascimento: %02d\\%02d\\%04d\nEmail: %s\nMovel: %s\t Fixo: %s", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
        conta_registro++;
    }

    if (conta_registro ==0)
        printf("\nAGENDA VAZIA\n");
}

int getLastID(FILE *pFile)
{
    CONTATO_T c;
    int id = -1;
    fseek( pFile, 0, SEEK_SET );
    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF)
    {
        id = c.id;
    }
    return id;
}

void inserir_contato(FILE *pFile)
{
    CONTATO_T c;
    int last_id = -1;
    last_id = getLastID(pFile);
    c.id = last_id +1;
    printf("Entre o Contato [%d]",c.id);
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



void excluir_contato(FILE *pFile)
{
    int id;
    int encontrou = 0;
    FILE *newFile = fopen("temp.dat","w+");
    CONTATO_T c;
    printf("Informe o id do contato a ser excluido: ");
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
            encontrou = 1;
        }
    }
    fclose(newFile);
    if (encontrou)
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
        printf("REGISTRO NAO ENCONTRADO");
    }
}

void editar_contato(FILE * pFile)
{
    int id;
    int encontrou = 0;
    FILE *newFile = fopen("temp.dat","w+");
    CONTATO_T c;
    printf("Informe o id do contato a ser editado: ");
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
            encontrou = 1;
        }
    }
    fclose(newFile);
    if (encontrou)
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
        printf("CONTATO NAO ENCONTRADO");
    }
}

/// A SUA MUDANCA DEVE SE CONCENTRAR EXCLUVIVAMENTE A ESTA FUNCAO !!!
void adicionar_digito9_ao_telefone(FILE * pFile)
{

CONTATO_T c;
    //int ind, ver=0;
    FILE *pProv = fopen("prov.dat","w");

    printf("Informe o id do contato a ser editado: ");
    scanf("%d",&ind);

    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome, &c.dia, &c.mes, &c.ano, c.email, c.t_movel, c.t_fixo)!=EOF)
    {
        /*if (c.id == ind)
        {
            printf("Nome: %s\n", c.nome);
            printf("Forneca o novo nome: ");
            scanf("%s", c.nome);
            printf("Nascimento dia mes ano: %d %d %d\n", c.dia, c.mes, c.ano);
            printf("Forneca dia mes ano: ");
            scanf("%d %d %d", &c.dia, &c.mes, &c.ano);
            printf("Email: %s\n", c.email);
            printf("Forneca email: ");
            scanf("%s", c.email);
            printf("Movel(11) %s fixo(10): %s",c.t_movel, c.t_fixo);
            printf("Forneca Movel(11) e fixo(10): ");
            scanf("%s", c.t_movel);
            scanf("%s",c.t_fixo);
            fprintf(pProv, "%d %s %d %d %d %s %s %s\n", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
            ver++;
        }
        else
            fprintf(pProv, "%d %s %d %d %d %s %s %s\n", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);*/
    }

    fclose(pFile);
    fclose(pProv);

    remove("agenda.dat");
    rename("prov.dat","agenda.dat");


}

int main()
{
    int opcao = 0;
    FILE * pFileAgenda;

    while (1)
    {
        printf("\n\n");
        printf("\n\nMENU DE OPERACOES NA AGENDA\n\n");
        printf("(1) Imprimir agenda\t\t(2) Inserir contato\n\n");
        printf("(3) Excluir contato\t\t(4) Editar contato\n\n");
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
            printf("EOF encontrado. Saindo ...\n\n\n");
            break;
        }

        switch (opcao)
        {
        case '1':
            imprimir_agenda(pFileAgenda);
            break;
        case '2':
            inserir_contato(pFileAgenda);
            break;
        case '3':
            excluir_contato(pFileAgenda);
            break;
        case '4':
            editar_contato(pFileAgenda);
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
