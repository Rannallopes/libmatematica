// main.c - Arquivo principal que utiliza a biblioteca libmatematica

#include <stdio.h>      // Inclui a biblioteca padrão de entrada/saída
#include "matematica.h" // Inclui o arquivo de cabeçalho da biblioteca libmatematica

int main() {
    // Define um ângulo em radianos para teste
    float angulo = 1.0;

    // Chama a função calcular_seno e imprime o resultado
    printf("Seno de %f radianos é: %f\n", angulo, calcular_seno(angulo));

    // Chama a função calcular_cosseno e imprime o resultado
    printf("Cosseno de %f radianos é: %f\n", angulo, calcular_cosseno(angulo));

    // Chama a função calcular_tangente e imprime o resultado
    printf("Tangente de %f radianos é: %f\n", angulo, calcular_tangente(angulo));

    return 0; // Retorna 0 indicando a execução bem-sucedida do programa
}
