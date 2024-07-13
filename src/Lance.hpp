#pragma once
#include "Usuario.hpp"
#include <string>

// Declaração da classe Lance
class Lance
{
private:
    Usuario usuario; // Usuário que fez o lance
    float valor; // Valor do lance

public:
    // Construtor que inicializa um lance com um usuário e um valor
    Lance(Usuario usuario, float valor);

    // Metodo para recuperar o valor do lance
    float recuperaValor() const;

    // Metodo para recuperar o nome do usuário que fez o lance
    std::string recuperaNomeUsuario() const;
};