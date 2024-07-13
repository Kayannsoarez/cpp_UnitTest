#pragma once
#include <limits.h>
#include "Leilao.hpp"

class Avaliador {

private:
    float maiorValor = INT_MIN; // Inicializa o maior valor com o menor valor inteiro possível
    float menorValor = INT_MAX; // Inicializa o menor valor com o maior valor inteiro possível
    // Vetor para armazenar os 3 maiores lances
    std::vector<Lance> maiores3Lances;
    // Declaração da função estática para ordenar lances
    static bool ordenaLances(const Lance&, const Lance&);

public:
    // Declaração do metodo para avaliar o leilão
    void avalia(Leilao);
    // Declaração do metodo para recuperar o maior valor
    float recuperaMaiorValor() const;
    // Declaração do metodo para recuperar o menor valor
    float recuperaMenorValor() const;
    // Declaração do metodo para recuperar os 3 maiores lances
    std::vector<Lance> recupera3MaioresLances() const;
};