#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{

}
string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setNome(string aux)
{
    nome=aux;
}

void Pessoa::setTelefone(string aux)
{
    telefone=aux;
}

string Pessoa::getpessoa()
{
    string p1="\n Nome da pessoa = ";
    string p2="\n Telefone da pessoa = ";

    return p1+nome+p2+telefone;
}
