#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// L05Ex05 - Defini��o dos tipos tPessoa e tAgenda
typedef struct tPessoa
{
    char nome[51],cpf[12],tel_movel[12];
    int ano_nascimento,id;
}tPessoa;
typedef struct tAgenda
{
    tPessoa *pessoas;
    int qtde,max_pessoa;
}tAgenda;
///############# A FUNCAO MENU NAO DEVE SER ALTERADA ############################
void menu()
{
    printf("\nOPERACOES\n");
    printf("1 - Listar contatos");
    printf("\t2 - Incluir contato\n");
    printf("3 - Editar contato");
    printf("\t4 - Excluir contato\n");
    printf("5 - Limpar contatos");
    printf("\t6 - Encerrar\n\n");
    printf("Informe o numero da operacao desejada:\n");
}
///############# A FUNCAO CARGA INICIAL NAO DEVE SER ALTERADA ############################
void cargaInicial(tAgenda * minhaAgenda)
{
    strcpy(minhaAgenda->pessoas[0].nome, "Contato1");
    minhaAgenda->pessoas[0].ano_nascimento = 1999;
    strcpy(minhaAgenda->pessoas[0].cpf , "11111111111");
    strcpy(minhaAgenda->pessoas[0].tel_movel , "61999991111");
    minhaAgenda->pessoas[0].id = 0;
    strcpy(minhaAgenda->pessoas[1].nome , "Contato2");
    minhaAgenda->pessoas[1].ano_nascimento = 2001;
    strcpy(minhaAgenda->pessoas[1].cpf , "22222222222");
    strcpy(minhaAgenda->pessoas[1].tel_movel , "61999992222");
    minhaAgenda->pessoas[1].id = 1;
    minhaAgenda->qtde=2;
}
///############# A FUNCAO IMPRIMIR PESSOA NAO DEVE SER ALTERADA ############################
void imprimirPessoa(tPessoa contato)
{
    printf("Id: %2d\n", contato.id);
    printf("Nome: %s\n", contato.nome);
    printf("Ano nascimento: %d\n", contato.ano_nascimento);
    printf("cpf: %s\n", contato.cpf);
    printf("tel movel: %s\n\n", contato.tel_movel);
}

///############# A FUNCAO LISTAR NAO DEVE SER ALTERADA ############################
void listar(tAgenda * minhaAgenda)
{
    int index;
    if (minhaAgenda->qtde>0)
        for(index=0; index < minhaAgenda->qtde; index++)
        {
            imprimirPessoa(minhaAgenda->pessoas[index]);
        }
    else printf("Agenda vazia!\n");
}

void incluir(tAgenda * minhaAgenda)
{
///L05Ex06 - Codificar a funcao de incluir - Os printfs a serem usados estao previamente definidos
    minhaAgenda->qtde++;


    if(minhaAgenda->qtde<=minhaAgenda->max_pessoa)
  {
     printf("Informe os seguintes dados\nnome:\n");
     printf("ano nascimento:\n");
     printf("cpf:\n");
     printf("tel movel:\n");
     scanf("%s",minhaAgenda->pessoas[minhaAgenda->qtde-1].nome);
     scanf("%d",&minhaAgenda->pessoas[minhaAgenda->qtde-1].ano_nascimento);
     scanf("%s",minhaAgenda->pessoas[minhaAgenda->qtde-1].cpf);
     scanf("%s",minhaAgenda->pessoas[minhaAgenda->qtde-1].tel_movel);
     minhaAgenda->pessoas[minhaAgenda->qtde-1].id =minhaAgenda->qtde-1 ;
  }
    else
       printf("Agenda lotada!\n");
    if(minhaAgenda->qtde>minhaAgenda->max_pessoa)
      minhaAgenda->qtde--;
}

void editar(tAgenda * minhaAgenda)
{
    int index;
    if (minhaAgenda->qtde>0)
    {
        printf("Informe o id do registro a ser editado:\n");
        do
        {
            scanf("%d", &index);
            if (index<0 || index >= minhaAgenda->qtde)
                printf("O id deve estar entre 0 e %d. Informe novamente:\n",minhaAgenda->qtde-1);
            else break;
        }
        while (1);
        ///L05Ex07 - Complemente a fun��o de edicao de registro - Os printfs a serem usados estao previamente definidos

        printf("Informe os seguintes dados\n");
        printf("nome atual: %s\nnovo nome:\n",minhaAgenda->pessoas[index].nome );
        scanf("%s",minhaAgenda->pessoas[index].nome);
        printf("ano nascimento atual: %d\nnovo ano nascimento:\n",minhaAgenda->pessoas[index].ano_nascimento );
        scanf("%d",&minhaAgenda->pessoas[index].ano_nascimento);
        printf("cpf atual: %s\nnovo cpf:\n",minhaAgenda->pessoas[index].cpf);
        scanf("%s",minhaAgenda->pessoas[index].cpf);
        printf("tel movel atual: %s\nnovo tel movel:\n", minhaAgenda->pessoas[index].tel_movel);
        scanf("%s",minhaAgenda->pessoas[index].tel_movel);

    }
    else printf("Agenda vazia!\n");
}

void excluir(tAgenda * minhaAgenda)
{
    int index;
    if (minhaAgenda->qtde>0)
    {
        printf("Informe o id do registro a ser excluido:\n");
        do
        {
            scanf("%d", &index);
            if (index<0 || index >= minhaAgenda->qtde)
                printf("O id deve estar entre 0 e %d. Informe novamente:\n",minhaAgenda->qtde-1);
            else break;
        }
        while (1);
        ///L05Ex08 - Complemente a funcao de exclusao de registro - Os printfs a serem usados estao previamente definidos
        minhaAgenda->pessoas[index]=minhaAgenda->pessoas[index+1];
        minhaAgenda->pessoas[index].id--;
        minhaAgenda->qtde--;
    }
    else printf("Agenda vazia!\n");
}

void limpar(tAgenda * minhaAgenda)
{
    ///L05Ex09 - Complemente a funcao de exclusao de registro
    free( minhaAgenda->pessoas);
    minhaAgenda->qtde=0;

}

///L05Ex04 - Declare e defina a fun��o AlocaVetorPessoa
int *AlocaVetorPessoa(int malo)
{
    int *pe;
    pe= (int *) malloc(malo*sizeof (int));
    return (pe);
}

///############# A FUNCAO MAIN NAO DEVE SER ALTERADA ############################
int main()
{
    int op, maxContatos, contaContatos;
    ///Declaracao do array de pessoa
    tAgenda minhaAgenda;
    minhaAgenda.qtde = 0;
    printf("Informe a quantidade maxima de registros da agenda:\n");
    do
    {
        scanf("%d", &minhaAgenda.max_pessoa);
        if (minhaAgenda.max_pessoa<=3)
            printf("A quantidade maxima da agenda deve ser superior a 3. Informe novamente:\n");
        else break;
    }
    while (1);

    minhaAgenda.pessoas = AlocaVetorPessoa(minhaAgenda.max_pessoa);
    cargaInicial(&minhaAgenda);
    do
    {
        menu();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            listar(&minhaAgenda);
            break;
        case 2:
            incluir(&minhaAgenda);
            break;
        case 3:
            editar(&minhaAgenda);
            break;
        case 4:
            excluir(&minhaAgenda);
            break;
        case 5:
            limpar(&minhaAgenda);
            break;
        case 6:
            exit(0);
        default:
            printf("Operacao inexistente!");

        }
    }
    while (1);

    return 0;
}
