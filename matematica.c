// matematica.c - Arquivo de implementação das funções da biblioteca libmatematica

#include "matematica.h" // Inclui o arquivo de cabeçalho da biblioteca
#include <math.h>       // Inclui a biblioteca matemática para as funções trigonométricas

// Verifica se a constante M_PI_2 já está definida
#ifndef M_PI_2
// Se M_PI_2 não estiver definida, define-a com o valor de π/2
#define M_PI_2 1.57079632679489661923
#endif

/**
 * Calcula o seno de um ângulo dado em radianos.
 * @param angulo_radianos O ângulo em radianos para calcular o seno.
 * @return O seno do ângulo fornecido.
 */
float calcular_seno(float angulo_radianos) {
    return sin(angulo_radianos); // Utiliza a função sin da biblioteca math.h
}

/**
 * Calcula o cosseno de um ângulo dado em radianos.
 * @param angulo_radianos O ângulo em radianos para calcular o cosseno.
 * @return O cosseno do ângulo fornecido.
 */
float calcular_cosseno(float angulo_radianos) {
    return cos(angulo_radianos); // Utiliza a função cos da biblioteca math.h
}

/**
 * Calcula a tangente de um ângulo dado em radianos.
 * @param angulo_radianos O ângulo em radianos para calcular a tangente.
 * @return A tangente do ângulo fornecido ou NaN se o ângulo for um múltiplo ímpar de π/2.
 */
float calcular_tangente(float angulo_radianos) {
    // Verifica se o ângulo é um múltiplo ímpar de π/2
    if (fmod(angulo_radianos, M_PI_2) == 0 && ((int)(angulo_radianos / M_PI_2) % 2) != 0) {
        return NAN; // Retorna NaN para evitar divisão por zero
    }
    return tan(angulo_radianos); // Utiliza a função tan da biblioteca math.h
}
