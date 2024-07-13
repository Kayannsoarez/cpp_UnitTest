#include "Lance.hpp"

// Construtor da classe Lance que inicializa um lance com um usuário e um valor
Lance::Lance(Usuario usuario, float valor) : usuario(usuario), valor(valor)
{
}

// Metodo para recuperar o valor do lance
float Lance::recuperaValor() const
{
    return valor;
}

// Metodo para recuperar o nome do usuário que fez o lance
std::string Lance::recuperaNomeUsuario() const
{
    return usuario.recuperaNome();
}
