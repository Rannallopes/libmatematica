// matematica.h - Arquivo de cabeçalho para a biblioteca libmatematica

#ifndef MATEMATICA_H // Verifica se MATEMATICA_H já foi definido
#define MATEMATICA_H // Define MATEMATICA_H para evitar inclusões múltiplas do arquivo

// Protótipos das funções para calcular seno, cosseno e tangente
// Estas funções assumem que o ângulo está em radianos

/**
 * Calcula o seno de um ângulo dado em radianos.
 * @param angulo_radianos O ângulo em radianos para calcular o seno.
 * @return O seno do ângulo fornecido.
 */
float calcular_seno(float angulo_radianos);

/**
 * Calcula o cosseno de um ângulo dado em radianos.
 * @param angulo_radianos O ângulo em radianos para calcular o cosseno.
 * @return O cosseno do ângulo fornecido.
 */
float calcular_cosseno(float angulo_radianos);

/**
 * Calcula a tangente de um ângulo dado em radianos.
 * @param angulo_radianos O ângulo em radianos para calcular a tangente.
 * @return A tangente do ângulo fornecido.
 */
float calcular_tangente(float angulo_radianos);

#endif // MATEMATICA_H

