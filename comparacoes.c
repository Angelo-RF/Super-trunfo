void compararCartas(Carta cartas[], int qtdCartas) {
    int c1, c2, atributos[5], qtd;
    exibirCartasComIndice(cartas, qtdCartas);

    printf("\nEscolha duas cartas pelo número mostrado:\n");
    scanf("%d %d", &c1, &c2);

    printf("Quantos atributos deseja comparar? (1 a 5): ");
    scanf("%d", &qtd);

    printf("Escolha os atributos:\n1 - Área\n2 - População\n3 - PIB\n4 - Densidade\n5 - PIB per capita\n");
    for (int i = 0; i < qtd; i++) {
        scanf("%d", &atributos[i]);
    }

    compararMultiplos(cartas[c1], cartas[c2], atributos, qtd);
}
