#include <stdio.h>

    int main(){

        //carta 1
        char estado;
        char codigo1[4];
        char nomecidade[50] = "";
        int populacao;
        float area;
        float pib;
        int pontosT;

        //carta 2
        char estado1;
        char codigo2[4];
        char nomecidade1[50] = "";
        int populacao1;
        float area1;
        float pib1;
        int pontosT1;


            printf("Carta 1:\n");

            printf("Estado: \n");
            scanf(" %c", &estado);

            printf("Codigo: \n");
            scanf(" %s", codigo1);

            printf("Nome da cidade: \n");
            scanf(" %[^\n]", nomecidade);
            getchar();
            //getchar pra limpar o buffer

            printf("Populacao: \n");
            scanf(" %d", &populacao);
            getchar();

            printf("Area: \n");
            scanf(" %f", &area);
            getchar();

            printf("PIB: \n");
            scanf(" %f", &pib);
            getchar();

            printf("Numero de pontos turisticos: \n");
            scanf(" %d", &pontosT);

            //carta 2

            printf("Carta 2:\n");

            printf("Estado: \n");
            scanf(" %c", &estado1);

            printf("Codigo: \n");
            scanf(" %s", codigo2);

            printf("Nome da cidade: \n");
            scanf(" %[^\n]", nomecidade1);
            getchar();

            printf("Populacao: \n");
            scanf(" %d", &populacao1);
            getchar();

            printf("Area: \n");
            scanf(" %f", &area1);
            getchar();

            printf("PIB: \n");
            scanf(" %f", &pib1);
            getchar();

            printf("Numero de pontos turisticos: \n");
            scanf(" %d", &pontosT1);

            printf("CARTAS CADASTRADAS\n");

            printf("----- CARTA 1 -----\n");
            printf("ESTADO: %c\n", estado);
            printf("CODIGO: %s\n", codigo1);
            printf("NOME DA CIDADE: %s\n", nomecidade);
            printf("POPULACAO: %d\n", populacao);
            printf("AREA: %.2f KM²\n", area);
            printf("PIB: %.2f BILHOES DE REAIS\n", pib);
            printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosT);

            //USANDO O NOME DA VARIAVEL JUNTO DO ESPECIFICADOR DE FORMATO PRA ADICIONAR O CONTEUDO DA VARIAVEL NA STRING

            printf("----- CARTA 2 -----\n");
            printf("ESTADO: %c\n", estado1);
            printf("CODIGO: %s\n", codigo2);
            printf("NOME DA CIDADE: %s\n", nomecidade1);
            printf("POPULACAO: %d\n", populacao1);
            printf("AREA: %.2f KM²\n", area1);
            printf("PIB: %.2f BILHOES DE REAIS\n", pib1);
            printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosT1);



    }
