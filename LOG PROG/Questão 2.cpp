#include <stdio.h>

int main() {
    float distanciaKm, velocidadeKmH, velocidadeMS, tempoHoras;

    // Entrada de dados
    printf("Digite a distancia entre A e B (em km): ");
    scanf("%f", &distanciaKm);
    printf("Digite a velocidade (em km/h): ");
    scanf("%f", &velocidadeKmH);

    // Cálculo
    tempoHoras = distanciaKm / velocidadeKmH;
    velocidadeMS = velocidadeKmH * 1000 / 3600;

    // Saída dos resultados
    printf("\n===== CALCULO DE TEMPO E VELOCIDADE =========\n");
    printf("Distancia entre A e B (km): %.2f\n", distanciaKm);
    printf("Velocidade (km/h): %.2f\n", velocidadeKmH);
    printf("\n======== Tempo Medio e Velocidade ============\n");
    printf("Velocidade: %.2f m/s\n", velocidadeMS);
    printf("Tempo medio: %.2f h\n", tempoHoras);

    return 0;
}
