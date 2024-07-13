#pragma once
#include <string>

// Declaração da classe Usuario
class Usuario
{
private:
    std::string nome; // Nome completo do usuário

public:
    // Construtor que inicializa um usuário com um nome
    Usuario(std::string nome);

    // Metodo para recuperar o nome completo do usuário
    std::string recuperaNome() const;

    // Metodo para recuperar o primeiro nome do usuário
    std::string recuperaPrimeiroNome() const;
};
