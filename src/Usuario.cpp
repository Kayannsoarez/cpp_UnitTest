#include "Usuario.hpp"

// Construtor da classe Usuario que inicializa um usuário com um nome
Usuario::Usuario(std::string nome) : nome(nome)
{
}

// Metodo para recuperar o nome completo do usuário
std::string Usuario::recuperaNome() const
{
    return nome;
}

// Metodo para recuperar o primeiro nome do usuário
std::string Usuario::recuperaPrimeiroNome() const {
    // Encontra a posição do primeiro espaço e retorna a substring do início até essa posição
    return nome.substr(0, nome.find(' '));
}
