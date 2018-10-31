#ifndef NO_H
#define NO_H
#include "produto.h"

class no
{
private:
    produto* dados;
    no* pai;
    no* fE;
    no* fD;

public:
    no();
    static no* montano(produto*);
    static produto* desmontano(no*);
    produto* getDados();
    no* getPai();
    no* getFE();
    no* getFD();
    void setDados(produto*);
    void setPai(no*);
    void setFE(no*);
    void setFD(no*);
    //geters e seters;
};

#endif // NO_H
