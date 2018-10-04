#ifndef TESTAFILA_H
#define TESTAFILA_H
#include "Fila.h"

class TestaFila
{
private:
    Fila obj;
public:
    TestaFila();
    void menu();
    Pessoa* criarPessoa();
    void mostrarFila();

};

#endif // TESTAFILA_H
