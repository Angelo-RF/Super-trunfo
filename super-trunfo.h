#ifndef SUPER_TRUNFO_H
#define SUPER_TRUNFO_H

#define MAX_CARTAS 10
#define ARQUIVO_CARTAS "cartas.txt"

typedef struct {
    char nome[50];
    double area;
    long populacao;
    double pib;
    double densidade_demografica;
    double pib_per_capita;
    long visitantes_anuais;
} Carta;

void cadastrarCarta(Carta cartas[], int *qtdCartas);
void excluirCarta(Carta cartas[], int *qtdCartas);
void salvarCartas(Carta cartas[], int qtdCartas);
int carregarCartas(Carta cartas[]);
void compararCartas(Carta cartas[], int qtdCartas);
void compararMultiplos(Carta p1, Carta p2, int atributos[], int qtd);
void exibirCartasComIndice(Carta cartas[], int qtdCartas);
void exibirMenu();

#endif
