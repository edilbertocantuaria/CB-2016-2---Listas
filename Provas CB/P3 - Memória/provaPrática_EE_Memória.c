#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo
{
    char marca[30];
    char modelo[30];
    int ano;
    float preco_diaria;
    int km_franquia;
} tVEICULO;

/// DEFINA O TIPO tLOCADORA
typedef struct Locadora{
    int qtde_max_veiculos, qtde_corrente_veiculos;
    tVEICULO *veiculos;
}tLOCADORA;

/// DEFINA A FUNCAO QUE ALOCA DINAMICAMENTE O ARRAY DE tVEICULO
tVEICULO * alocaArrayVeiculos(int maximo)
{
    tVEICULO *Veicul;
    Veicul = (tVEICULO*) malloc(maximo * sizeof(tVEICULO));
    return Veicul;
}

/// DEFINA A FUNCAO incluiVeiculo, QUE LE OS DADOS DO REGISTRO DE VEICULO
/// OBSERVE A CHAMADA A FUNCAO PARA DEFINIR A SUA ASSINATURA E O SEU CORPO

int incluiVeiculo(tLOCADORA *maloc)
{
    if(maloc->qtde_corrente_veiculos>=maloc->qtde_max_veiculos)
        return 0;
    printf("\ninforme a marca: ");
    scanf("%s", maloc->veiculos[maloc->qtde_corrente_veiculos].marca);
    printf("informe o modelo: ");
    scanf("%s", maloc->veiculos[maloc->qtde_corrente_veiculos].modelo);
    printf("informe o ano: ");
    scanf("%d", &maloc->veiculos[maloc->qtde_corrente_veiculos].ano);
    printf("informe o preco da diaria: ");
    scanf("%f", &maloc->veiculos[maloc->qtde_corrente_veiculos].preco_diaria);
    printf("informe os km da franquia: ");
    scanf("%d", &maloc->veiculos[maloc->qtde_corrente_veiculos].km_franquia);
    maloc->qtde_corrente_veiculos++;
    return maloc->qtde_corrente_veiculos;
}

/// DEFINA A FUNCAO contaVeiculos, QUE AVALIA A QUANTIDADE DE REGISTROS DE VEICULOS COM A MARCA/MODELO INFORMADO
/// OBSERVE A CHAMADA A FUNCAO PARA DEFINIR A SUA ASSINATURA E O SEU CORPO
/// A FUNCAO strcmp PODE SER USADA PARA COMPARA DUAS VARIAVEIS
int contaVeiculos(tLOCADORA maloc, char marca_2[20], char modelo_2[20])
{
    int y, contador=0;
    for(y=0; y<maloc.qtde_corrente_veiculos; y++)
        if(strcmp(marca_2, maloc.veiculos[y].marca)==0)
            if(strcmp(modelo_2, maloc.veiculos[y].modelo)==0)
                contador++;
    return contador;
    return -1;
}

void mostraVeiculos(tLOCADORA loc)
{
    int i;
    printf("\ncapacidade da locadora: %2d carro(s)", loc.qtde_max_veiculos);
    printf("\nquantidade de carros: %2d", loc.qtde_corrente_veiculos);
    printf("\nid\tmarca\tmodelo\tano\tdiaria(R$)\tfranquia(Km)\n");
    for(i = 0; i < loc.qtde_corrente_veiculos; i++)
    {
        printf("[%02d]\t%s\t%s\t%d\t%.2f\t\t%d\n",i,
               loc.veiculos[i].marca,
               loc.veiculos[i].modelo,
               loc.veiculos[i].ano,
               loc.veiculos[i].preco_diaria,
               loc.veiculos[i].km_franquia);
    }
}

int main()
{
    tLOCADORA minhaLocadora;
    char string_busca_marca[20], string_busca_modelo[20];
    int qtde_veiculo_encontrada;
    printf("informe a quantidade maxima de veiculos em sua locadora: ");
    scanf("%d", &minhaLocadora.qtde_max_veiculos);
    minhaLocadora.qtde_corrente_veiculos = 0;
    minhaLocadora.veiculos = alocaArrayVeiculos(minhaLocadora.qtde_max_veiculos);

    if (incluiVeiculo(&minhaLocadora)>0)
    {
        mostraVeiculos(minhaLocadora);
    }
    else printf("\nlocadora com capacidade maxima");

    if (incluiVeiculo(&minhaLocadora)>0)
    {
        mostraVeiculos(minhaLocadora);
    }
    else printf("\nlocadora com capacidade maxima");

    if (incluiVeiculo(&minhaLocadora)>0)
    {
        mostraVeiculos(minhaLocadora);
    }
    else printf("\nlocadora com capacidade maxima");

    printf("\ninforme a marca: ");
    scanf("%s", string_busca_marca);
    printf("\ninforme o modelo: ");
    scanf("%s", string_busca_modelo);


    qtde_veiculo_encontrada = contaVeiculos(minhaLocadora,string_busca_marca, string_busca_modelo);
    if (qtde_veiculo_encontrada>0 )
    {
        printf("existe(m) %d veiculo(s) da marca %s e modelo %s",qtde_veiculo_encontrada, string_busca_marca, string_busca_modelo);
    }
    else if (qtde_veiculo_encontrada!=-1){
        printf("nao ha veiculo com a marca %s e modelo %s", string_busca_marca, string_busca_modelo);
    }
    free(minhaLocadora.veiculos);

    return 0;
}
