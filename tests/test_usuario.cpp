#include "catch.hpp"
#include "../src/Lance.hpp"

// Caso de teste para a classe Usuario
TEST_CASE("Usuário deve Saber Informar seu Primeiro Nome") {
    // Cria um objeto Usuario com o nome completo
    Usuario user("Kayann Soares");

    // Chama o metodo para recuperar o primeiro nome do usuário
    std::string primeiroNome = user.recuperaPrimeiroNome();

    // Verifica se o primeiro nome recuperado é "Kayann"
    REQUIRE("Kayann" == primeiroNome);
}
