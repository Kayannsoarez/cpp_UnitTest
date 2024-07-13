#include "Leilao.hpp"
#include <string>

// Implementação do construtor da classe Leilao
Leilao::Leilao(std::string descricao) : descricao(descricao)
{
}

// Metodo para recuperar os lances do leilão
const std::vector<Lance>& Leilao::recuperaLances() const
{
    return lances;
}

// Metodo para receber um lance no leilão
void Leilao::recebeLance(const Lance& lance)
{
    // Adiciona o lance apenas se for o primeiro lance ou se o último lance não for do mesmo usuário
    if (lances.size() == 0 || lances.back().recuperaNomeUsuario() != lance.recuperaNomeUsuario()) {
        lances.push_back(lance);
    }
}


