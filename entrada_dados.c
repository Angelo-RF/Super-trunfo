void cadastrarCarta(Carta cartas[], int *qtdCartas) {
    printf("\nNome do país: ");
    fgets(cartas[*qtdCartas].nome, 50, stdin);
    strtok(cartas[*qtdCartas].nome, "\n");

    printf("Área (km²): ");
    scanf("%lf", &cartas[*qtdCartas].area);
    // Captura os outros atributos...
    getchar();

    (*qtdCartas)++;
    salvarCartas(cartas, *qtdCartas);
}
