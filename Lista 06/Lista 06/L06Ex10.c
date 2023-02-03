#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void inserir_contato(FILE *pFile)
{
    CONTATO_T c;

    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF);
    c.id++;

    printf("Contato [%d]\n",c.id);
    printf("Nome: ");
    scanf("%s", c.nome);
    printf("Nascimento dia mes ano: ");
    scanf("%d %d %d", &c.dia, &c.mes, &c.ano);
    printf("Email: ");
    scanf("%s", c.email);
    printf("Movel(11) e fixo(10): ");
    scanf("%s", c.t_movel);
    scanf("%s", c.t_fixo);

    fprintf(pFile,"\n%d %s %d %d %d %s %s %s", c.id, c.nome, c.dia, c.mes, c.ano, c.email, c.t_movel, c.t_fixo);

}


void excluir_contato(FILE *pFile)
{
    CONTATO_T c;
    FILE *prov = fopen("prov.dat","w");
    int ind, cont=0;
    printf("Informe o id do contato a ser excluido: ");
    scanf("%d",&ind);

     while (fscanf(pFile, "%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!=EOF)
    {
        if (c.id != ind)
        {
            fprintf(prov, "%d %s %d %d %d %s %s %s\n", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
            cont=1;
        }
    }
    if (cont==0)
        printf("REGISTRO NAO ENCONTRADO");
    else
        printf("REGISTRO APAGADO COM SUCESSO");

    fclose(pFile);
    fclose(prov);

    remove("agenda.dat");
    rename("prov.dat","agenda.dat");
}

void editar_contato(FILE * pFile)
{
    CONTATO_T c;
    int ind, ver=0;
    FILE *pProv = fopen("prov.dat","w");

    printf("Informe o id do contato a ser editado: ");
    scanf("%d",&ind);

    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome, &c.dia, &c.mes, &c.ano, c.email, c.t_movel, c.t_fixo)!=EOF)
    {
        if (c.id == ind)
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
            fprintf(pProv, "%d %s %d %d %d %s %s %s\n", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
    }
    if(ver==0)
        printf("REGISTRO NAO ENCONTRADO");
    fclose(pFile);
    fclose(pProv);

    remove("agenda.dat");
    rename("prov.dat","agenda.dat");
}

void buscar_contato(FILE * pFile)
{
    CONTATO_T c;
    int cont = 0;
    char nome[50];
    printf("Informe o nome do contato a ser consultado: ");
    scanf("%s", nome);

    while (fscanf(pFile, "%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!=EOF)
    {
        if (strcmp(nome,c.nome)==0)
        {
            printf("Nome: %s\n", c.nome);
            printf("Nascimento: %d\\%d\\%d\n", c.dia, c.mes, c.ano);
            printf("Email: %s\n", c.email);
            printf("Movel(11): %s fixo(10): %s\n",c.t_movel, c.t_fixo);
            cont=1;
        }
    }
    if (cont==0)
        printf("CONTATO NAO ENCONTRADO");
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
        printf("(5) Buscar contato\t\t(6) Sair do programa\n\n\n");

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
            buscar_contato(pFileAgenda);
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
