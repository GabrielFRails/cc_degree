#ifndef _COMPLEX_
#define _COMPLEX_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    char code[2];
    double real, img; //Parte real e imaginária do número
} Complex;

/**
 * @brief Reserva espaço na memória para criar um número complexo Geométrico
 * 
 * @param real parte real do número
 * @param img  parte imaginária do número
 * @return um ponteiro para struct do número criado
 */

Complex *create_complex(double real, double img);

/**
 * @brief Reserva espaço na memória para criar um número complexo na forma Polar
 * 
 * @param r valor absoluto do número complexo "rô"
 * @param ang ângulo do número complexo
 * @return um ponteiro para struct do número criado
 */

Complex *create_complexPolar(double r, double ang);

/**
 * @brief converte grau em radianos
 * 
 * @param graus âlgulo informado
 * @return valor em radianos do grau dado 
 */

double convert2Radianos(double graus);

/**
 * @brief converte radiano em grau
 * 
 * @param radius rad informado
 * @return double 
 */


double convert2Graus(double radius);

/**
 * @brief Salva um número complexo em um arquivo
 * 
 * @param cp ponteiro para estrura do numero a ser salbo
 * @param dir diretório para o qual será encaminhado
 */

void saveComplex(Complex *cp, char* dir);

/**
 * @brief 
 * 
 * @param dir caminho do arquivo a ser lido
 * @return ponteiro para o complexo lido 
 */

Complex * readComplex(char *dir);

/**
 * @brief imprime um número complexo na forma algébrica a + bi;
 * 
 * @param number ponteiro para o número em questão
 */

void printComplexAlg(Complex *number);

/**
 * @brief imprime um número complexo na forma geométrica
 * 
 * @param number ponteiro para o número em questão
 */

void printComplexGeo(Complex *number);

/**
 * @brief imprime um número complexo na forma Polar
 * 
 * @param number ponteiro para o número em questão
 */

void printComplexPolar(Complex *number);

/**
 * @brief realiza a soma de dois complexos
 * 
 * @param c1 endereço do primeiro complexo
 * @param c2 endereço do segundo
 * @return endereço para o complexo resultante 
 */

Complex * complexo_sum(Complex * c1, Complex * c2);

/**
 * @brief realiza a subtração de dois complexos
 * 
 * @param c1 endereço do primeiro complexo
 * @param c2 endereço do segundo
 * @return endereço para o complexo resultante 
 */

Complex * complexo_sub(Complex * c1, Complex *c2);

/**
 * @brief  realiza a multiplicação entre dois números complexos
 * 
 * @param c1 endereço do primeiro complexo
 * @param c2 endereço do segundo
 * @return endereço para o complexo resultante 
 */

Complex * complexo_multi(Complex * c1, Complex * c2);

/**
 * @brief  realiza a divisão entre dois números complexos
 * 
 * @param c1 endereço do primeiro complexo
 * @param c2 endereço do segundo
 * @return endereço para o complexo resultante 
 */

Complex * complexo_div(Complex * c1, Complex *c2);

#endif