#ifndef FILA_H
#define FILA_H
#include "No.h"

class Fila
{
private:
    No* inicio,final;

public:
    Fila();
    bool enfileirar(Pessoa*);
    bool vazia();
    Pessoa* desenfileirar();

};

#endif // FILA_H
