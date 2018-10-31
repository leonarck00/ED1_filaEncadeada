#ifndef PRODUTO_H
#define PRODUTO_H
#include <ostream>

class produto
{
private:
    std::string descricao, codBarras;
    int qtd;
    float valor;
public:
    std::string getDescricao();
    std::string getCodBarras();
    int getQtd();
    float getValor();
    void setDescricao(std::string);
    void setcodBarras(std::string);
    void setQtd(int);
    void setValor(float);
    produto();
    std::string getProduto()const;
};

#endif // PRODUTO_H
