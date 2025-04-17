#include <stdio.h>

    int main(){

        //carta 1
        char estado;
        char codigo1[4];
        char nomecidade[50] = "";
        unsigned long int populacao;
        float area;
        float pib;
        int pontosT;
        float densPop;
        float pibCapt;

        //carta 2
        char estado1;
        char codigo2[4];
        char nomecidade1[50] = "";
        unsigned long int populacao1;
        float area1;
        float pib1;
        int pontosT1;
        float densPop1;
        float pibCapt1;
            
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
            
            //cálculos

            densPop = populacao / area;
            pibCapt = pib / populacao;
        float inversoDensidade = 1.0f / (densPop + 0.0001f);
        float superPoder = (float) populacao + area + pib + (float)pontosT + pibCapt + inversoDensidade;
            
            densPop1 = populacao1 / area1;
            pibCapt1 = pib1 / populacao1;
        float inversoDensidade1 = 1.0f / (densPop1 + 0.0001f);
        float superPoder1 = (float) populacao1 + area1 + pib1 + (float)pontosT1 + pibCapt1 + inversoDensidade1;

            // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)

        int vPop = populacao > populacao1;
        int vArea = area > area1;
        int vPib = pib > pib1;
        int vPontos = pontosT > pontosT1;
        int vPibCap = pibCapt > pibCapt1;
        int vDens = densPop < densPop1;
        int vPoder = superPoder > superPoder1;
            
            //exibição das cartas

            printf("CARTAS CADASTRADAS\n");

            printf("----- CARTA 1 -----\n");
            printf("ESTADO: %c\n", estado);
            printf("CODIGO: %s\n", codigo1);
            printf("NOME DA CIDADE: %s\n", nomecidade);
            printf("POPULACAO: %d\n", populacao);
            printf("AREA: %.2f KM²\n", area);
            printf("PIB: %.2f BILHOES DE REAIS\n", pib);
            printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosT);
            printf("DENSIDADE POPULACIONAL: %f HAB/KM²\n", densPop);
            printf("PIB PER CAPITA: %f\n", pibCapt);

            //USANDO O NOME DA VARIAVEL JUNTO DO ESPECIFICADOR DE FORMATO PRA ADICIONAR O CONTEUDO DA VARIAVEL NA STRING

            printf("----- CARTA 2 -----\n");
            printf("ESTADO: %c\n", estado1);
            printf("CODIGO: %s\n", codigo2);
            printf("NOME DA CIDADE: %s\n", nomecidade1);
            printf("POPULACAO: %d\n", populacao1);
            printf("AREA: %.2f KM²\n", area1);
            printf("PIB: %.2f BILHOES DE REAIS\n", pib1);
            printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosT1);
            printf("DENSIDADE POPULACIONAL: %f HAB/KM²\n", densPop1);
            printf("PIB PER CAPITA: %f\n", pibCapt1);

            char *vencedor[2] = {"Carta 2 venceu (0)", "Carta 1 venceu (1)"};

            printf("POPULACAO: %s\n", vencedor[vPop]);
            printf("AREA: %s\n", vencedor[vArea]);
            printf("PIB: %s\n", vencedor[vPib]);
            printf("PONTOS TURISTICOS: %s\n", vencedor[vPontos]);
            printf("DENSIDADE POPULACIONAL: %s\n", vencedor[vDens]);
            printf("PIB PER CAPITA: %s\n", vencedor[vPibCap]);
            printf("SUPER PODER: %s\n", vencedor[vPoder]);

            int pontosCarta1 = vPop + vArea + vPib + vPontos + vPibCap + vDens + vPoder;
            int pontosCarta2 = 7 - pontosCarta1;

            printf("CARTA %d VENCEU!\n", (pontosCarta1 > pontosCarta2) * 1 + (pontosCarta2 > pontosCarta1) * 2);

            printf("COMPARAÇÃO DE CARTAS: ATRIBUTO(POPULACAO)\n");

            printf("Carta 1: populacao de %s: %d\n", nomecidade, populacao);
            printf("Carta 2: populacao de %s: %d\n", nomecidade1, populacao1);
            
            if (populacao > populacao1){
                printf("resultado: carta 1 %s venceu\n", nomecidade);
            } else if (populacao1 > populacao) {
                printf("resultado: carta 2 %s venceu\n", nomecidade1);
            }

            int escolha;
            printf("===== SUPER TRUNFO: COMPARAÇÃO DE ATRIBUTOS =====\n");
            printf("Escolha o atributo para comparar:\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional (menor vence)\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super Poder\n");
            printf("Opcao: ");
            scanf("%d", &escolha);

        switch (escolha) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu\n", nomecidade, populacao);
            printf("%s: %lu\n", nomecidade1, populacao1);
        
        if (populacao > populacao1)        
            printf("Resultado: %s venceu\n", nomecidade);
        else if (populacao1 > populacao)
            printf("Resultado: %s venceu\n", nomecidade1);
        else
            printf("Empate!\n");
        break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f\n", nomecidade, area);
            printf("%s: %.2f\n", nomecidade1, area1);
        if (area > area1)
            printf("Resultado: %s venceu\n", nomecidade);
        else if (area1 > area)
            printf("Resultado: %s venceu\n", nomecidade1);
        else
            printf("Empate!\n");
        break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f\n", nomecidade, pib);
            printf("%s: %.2f\n", nomecidade1, pib1);
        if (pib > pib1)
            printf("Resultado: %s venceu\n", nomecidade);
        else if (pib1 > pib)
            printf("Resultado: %s venceu\n", nomecidade1);
        else
            printf("Empate!\n");
        break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", nomecidade, pontosT);
            printf("%s: %d\n", nomecidade1, pontosT1);
        if (pontosT > pontosT1)
            printf("Resultado: %s venceu\n", nomecidade);
        else if (pontosT1 > pontosT)
            printf("Resultado: %s venceu\n", nomecidade1);
        else
            printf("Empate!\n");
        break;

        case 5:
            printf("Comparando Densidade Populacional (menor vence):\n");
            printf("%s: %.2f\n", nomecidade, densPop);
            printf("%s: %.2f\n", nomecidade1, densPop1);
        if (densPop < densPop1)
            printf("Resultado: %s venceu\n", nomecidade);
        else if (densPop1 < densPop)
            printf("Resultado: %s venceu\n", nomecidade1);
        else
            printf("Empate!\n");
        break;
        
        }
    }
