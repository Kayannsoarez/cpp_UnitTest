#include "Avaliador.hpp"
#include <algorithm>

// Implementação do mEtodo que avalia um leilão
void Avaliador::avalia(Leilao leilao) {
    // Recupera os lances do leilão
    std::vector<Lance> lances = leilao.recuperaLances();

    // Percorre todos os lances para encontrar o maior e o menor valor
    for (Lance lance : lances) {
        if (lance.recuperaValor() > maiorValor) {
            maiorValor = lance.recuperaValor();
        }
        if (lance.recuperaValor() < menorValor) {
            menorValor = lance.recuperaValor();
        }
    }

    // Ordena os lances em ordem decrescente com base no valor
    std::sort(lances.begin(), lances.end(), ordenaLances);

    // Define o tamanho como 3 ou o tamanho dos lances, o que for menor
    size_t tamanho = lances.size() > 3 ? 3 : lances.size();

    // Armazena os 3 maiores lances
    maiores3Lances = std::vector<Lance>(lances.begin(), lances.begin() + tamanho);
}

// Metodo para recuperar o maior valor avaliado
float Avaliador::recuperaMaiorValor() const {
    return maiorValor;
}

// Metodo para recuperar o menor valor avaliado
float Avaliador::recuperaMenorValor() const {
    return menorValor;
}

// Metodo para recuperar os 3 maiores lances
std::vector<Lance> Avaliador::recupera3MaioresLances() const {
    return maiores3Lances;
}

// Função estática para ordenar os lances em ordem decrescente
bool Avaliador::ordenaLances(const Lance& lance1, const Lance& lance2) {
    return lance1.recuperaValor() > lance2.recuperaValor();
}
