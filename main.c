#include "super_trunfo.h"

int main() {
    Carta cartas[MAX_CARTAS];
    int qtdCartas = carregarCartas(cartas);
    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);
        getchar(); // Limpa buffer

        if (opcao == 1) cadastrarCarta(cartas, &qtdCartas);
        else if (opcao == 2) exibirCartasComIndice(cartas, qtdCartas);
        else if (opcao == 3) excluirCarta(cartas, &qtdCartas);
        else if (opcao == 4) compararCartas(cartas, qtdCartas);

    } while (opcao != 5);

    return 0;
}
