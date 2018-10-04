#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
private:
    string nome,telefone;

public:
    Pessoa();
    string getNome() ;
    string getTelefone();
    void setNome(string);
    void setTelefone(string);
    string getpessoa();
};

#endif // PESSOA_H
