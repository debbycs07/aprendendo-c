#include <stdio.h>
#include <string.h>

int main(){
    char Estado[4];
    char Codigo[4];
    char Cidade[50];
    int Populacao, Pontos_turistico;
    float Area, pib;
    char Estado2[4];
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2, Pontos_turistico2;
    float Area2, pib2;
    int opcao;

    printf("Digite a sigla de um Estado Brasileiro: ");
    scanf("%s", Estado);

    getchar();

    printf("Digite o nome de uma cidade do Estado escolhido: ");
    fgets(Cidade, sizeof(Cidade), stdin);
    Cidade[strcspn(Cidade, "\n")] = '\0';

    printf("Insira o tamanho da populacao: ");
    scanf("%d", &Populacao);

    printf("Insira qual a área da cidade: ");
    scanf("%f", &Area);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de Pontos Turisticos existem na cidade: ");
    scanf("%d", &Pontos_turistico);

    printf("Digite a sigla de um Estado Brasileiro: ");
    scanf("%s", Estado2);

    getchar();

    printf("Digite o nome de uma cidade do Estado escolhido: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0';

    printf("Insira o tamanho da populacao: ");
    scanf("%d", &Populacao2);

    printf("Insira qual a área da cidade: ");
    scanf("%f", &Area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de Pontos Turisticos existem na cidade: ");
    scanf("%d", &Pontos_turistico2);

    float Densidade = Populacao/Area;
    float Densidade2 = Populacao2/Area2;

    printf("Carta 1: \nCodigo: %s01 \n", Estado);
    printf("Nome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f bi de reais \nPontos Turisticos: %d\n",  
          Cidade, Populacao, Area, pib, Pontos_turistico);

    printf("Carta 2: \nCodigo: %s02 \n", Estado2);
    printf("Nome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f bi de reais \nPontos Turisticos: %d\n", 
        Cidade2, Populacao2, Area2, pib2, Pontos_turistico2);

    printf("Escolha o atributo que deseja comparar:\n1- Populacao; \n2- Area;\n 3- PIB;\n 4- Numero de pontos turisticos;\n 5- Densidade demografica");
    scanf("%d", &opcao);
    
    switch (opcao) {
    case 1 :
        if (Populacao>Populacao2) {
            printf("A carta 1 venceu o jogo!\n");
        }   else if (Populacao2>Populacao){
            printf("A carta 2 venceu o jogo!\n");
        }   else if (Populacao2==Populacao){
            printf("Empate!\n");
        }
        break;
    case 2 :
        if (Area>Area2) {
            printf("A carta 1 venceu o jogo!\n");
        }   else if (Area2>Area){
            printf("A carta 2 venceu o jogo!\n");
        }   else if (Area2==Area){
            printf("Empate!\n");
        }
        break;
    case 3 :
        if (pib>pib2) {
            printf("A carta 1 venceu o jogo!\n");
        }   else if (pib2>pib){
            printf("A carta 2 venceu o jogo!\n");
        }   else if (pib2==pib){
            printf("Empate!\n");
        }
        break;
    case 4 :
        if (Pontos_turistico>Pontos_turistico2) {
            printf("A carta 1 venceu o jogo!\n");
        }   else if (Pontos_turistico2>Pontos_turistico){
            printf("A carta 2 venceu o jogo!\n");
        }   else if (Pontos_turistico2==Pontos_turistico){
            printf("Empate!\n");
        }
        break;
    case 5 :
        if (Densidade<Densidade2) {
            printf("A carta 1 venceu o jogo!\n");
        }   else if (Densidade2<Densidade){
            printf("A carta 2 venceu o jogo!\n");
        }   else if (Densidade2==Densidade){
            printf("Empate!\n");
        }
        break;
    default:
        printf("Valor inválido!\n");
        break;
    }
    return 0;
}