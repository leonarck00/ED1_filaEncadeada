#include "No.h"

No::No()
{
    anterior = nullptr;
    dados = nullptr;
}

void No::setAnterior(No* aux)
{
    anterior=aux;
}

void No::setDados(Pessoa* aux)
{
    dados=aux;
}

No* No::getAnterior()
{
    return anterior;
}

No* No::montaNo(Pessoa* aux)
{
    No* retorno = new No;
    retorno->setAnterior(0);
    retorno->setDados(aux);
    return retorno;
}

Pessoa* No::getDados()
{
    return dados;
}

Pessoa* No::desmontaNo(No* aux)
{
    if(aux==0)
        return 0;
    else
    {
        Pessoa* retorno= aux->getDados();
        delete aux;
        return retorno;
    }
}
