#include "catch.hpp"
#include "../src/Leilao.hpp"
#include "../src/Lance.hpp"


// Caso de teste para a classe Leilao
TEST_CASE("Leilão não deve Receber Lances Consecutivos do Mesmo Usuario") {
    /* Arrange */
    // Cria um leilão com a descrição
    Leilao leilao("Ford Maverick Tunado");
    // Cria um usuário com o nome
    Usuario user("Kayann");

    // Cria o primeiro lance do usuario
    Lance primeiroLance(user, 1000);
    // Cria o segundo lance do usuario
    Lance segundoLance(user, 1500);

    /* Act */
    // O leilão recebe o primeiro lance
    leilao.recebeLance(primeiroLance);
    // O leilão tenta receber o segundo lance consecutivo do mesmo usuário
    leilao.recebeLance(segundoLance);

    /* Assert */
    // Verifica se o leilão possui apenas um lance
    REQUIRE(1 == leilao.recuperaLances().size());
}
