#ifndef NO_H
#define NO_H
#include "Pessoa.h"

class No
{
private:
    No* anterior;
    Pessoa* dados;

public:
    void setAnterior(No*);
    void setDados(Pessoa*);
    No* getAnterior();
    Pessoa* getDados();
    static Pessoa* desmontaNo(No*);
    static No* montaNo(Pessoa*);
    No();

};

#endif // NO_H
