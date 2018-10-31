#include "produto.h"

produto::produto()
{

}

std::string produto::getDescricao(){
    return descricao;
}

std::string produto::getCodBarras(){
    return codBarras;
}

int produto::getQtd(){
    return qtd;
}

float produto::getValor(){
    return valor;
}

void produto::setDescricao(std::string aux){
    descricao = aux;
}

void produto::setcodBarras(std::string aux){
    codBarras = aux;
}

void produto::setQtd(int aux){
    qtd = aux;
}

void produto::getValor(float aux){
    valor = aux;
}
