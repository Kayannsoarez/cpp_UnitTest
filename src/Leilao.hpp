#pragma once
#include <vector>
#include <string>
#include "Lance.hpp"

// Declaração da classe Leilao
class Leilao
{
private:
    std::vector<Lance> lances; // Vetor que armazena os lances do leilão
    std::string descricao; // Descrição do leilão

public:
    // Construtor que inicializa um leilão com uma descrição
    Leilao(std::string descricao);

    // Metodo que retorna uma referência constante ao vetor de lances
    const std::vector<Lance>& recuperaLances() const;

    // Metodo que recebe um lance e o adiciona ao vetor de lances
    void recebeLance(const Lance& lance);
};