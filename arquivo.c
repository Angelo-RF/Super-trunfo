void salvarCartas(Carta cartas[], int qtdCartas) {
    FILE *arquivo = fopen(ARQUIVO_CARTAS, "w");
    if (!arquivo) {
        printf("Erro ao salvar as cartas!\n");
        return;
    }

    for (int i = 0; i < qtdCartas; i++) {
        fprintf(arquivo, "%s;%lf;%ld;%lf;%lf;%lf;%ld\n",
                cartas[i].nome, cartas[i].area, cartas[i].populacao,
                cartas[i].pib, cartas[i].densidade_demografica,
                cartas[i].pib_per_capita, cartas[i].visitantes_anuais);
    }

    fclose(arquivo);
}
