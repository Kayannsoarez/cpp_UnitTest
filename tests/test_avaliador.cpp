#include "catch.hpp"
#include "../src/Avaliador.hpp"
#include "../src/Leilao.hpp"
#include "../src/Lance.hpp"

// Função auxiliar que cria um leilão com lances em ordem crescente de valores
Leilao emOrdemCrescente()
{
    // Cria lances com valores
    Lance primeiroLance(Usuario("Kayann"), 1000);
    Lance segundoLance(Usuario("Gabrielly"), 2000);

    // Cria um leilão com descrição
    Leilao leilao("Fiat Uno 4x4");

    // Adiciona os lances ao leilão
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    // Retorna o leilão criado
    return leilao;
}

// Função auxiliar que cria um leilão com lances em ordem decrescente de valores
Leilao emOrdemDecrescente()
{
    // Cria lances com valores
    Lance primeiroLance(Usuario("Kayann"), 2000);
    Lance segundoLance(Usuario("Gabrielly"), 1000);

    // Cria um leilão com descrição
    Leilao leilao("Fiat Uno 4x4");

    // Adiciona os lances ao leilão
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    // Retorna o leilão criado
    return leilao;
}

// Caso de teste para a classe Avaliador
TEST_CASE("Avaliador") {
    /* Arrange - Given */
    // Cria um objeto Avaliador
    Avaliador leiloeiro;

    // Seção de testes para leilões ordenados
    SECTION("Leilões ordenados") {
        // Usa a macro GENERATE para testar com leilões em ordem crescente e decrescente
        Leilao leilao = GENERATE(emOrdemCrescente(), emOrdemDecrescente());

        // Sub-seção para testar a recuperação do maior lance
        SECTION("Deve recuperar maior lance de leilão") {
            /* Act - When */
            // Avalia o leilão
            leiloeiro.avalia(leilao);


            // Verifica se o maior valor recuperado é 2000
            REQUIRE(2000 == leiloeiro.recuperaMaiorValor());
        }

        // Sub-seção para testar a recuperação do menor lance
        SECTION("Deve recuperar menor lance de leilão") {
            /* Act - When */
            // Avalia o leilão
            leiloeiro.avalia(leilao);

            /* Assert - Then */
            // Verifica se o menor valor recuperado é 1000
            REQUIRE(1000 == leiloeiro.recuperaMenorValor());
        }
    }

    // Seção para testar a recuperação dos 3 maiores lances
    SECTION("Deve Recuperar os 3 Maiores Lances") {
        /* Arrange - Given */
        // Cria lances com diferentes valores
        Lance primeiroLance(Usuario("Kayann"), 1000);
        Lance segundoLance(Usuario("Gabrielly"), 2000);
        Lance terceiroLance(Usuario("Evandro"), 3500);
        Lance quartoLance(Usuario("Regiane"), 5000);

        // Cria um leilão com descrição
        Leilao leilao("Fiat Uno 4x4");

        // Adiciona os lances ao leilão
        leilao.recebeLance(primeiroLance);
        leilao.recebeLance(segundoLance);
        leilao.recebeLance(terceiroLance);
        leilao.recebeLance(quartoLance);

        /* Act - When */
        // Avalia o leilão
        leiloeiro.avalia(leilao);

        /* Assert - Then */
        // Recupera os 3 maiores lances
        auto maiores3Lances = leiloeiro.recupera3MaioresLances();
        // Verifica se o número de lances recuperados é 3
        REQUIRE(3 == maiores3Lances.size());
    }
}
