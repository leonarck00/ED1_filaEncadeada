#include "TestaFila.h"

using namespace std;

TestaFila::TestaFila()
{

}

void TestaFila::menu()
{
    Pessoa* aux;
    bool ok;
    int x,op;
    do
    {
        cout<<"\n1 - Para Inserir \n";
        cout<<"2 - Para Remover \n";
        cout<<"3 - Para mostrar pessoa \n";
        cout<<"4 - Para encerrar \n";
        cout<<"Sua escolha [  ] \b\b\b";
        cin>>x;

        switch (x)
        {
            case 1://cria pessoa

                aux=criarPessoa();
                ok=obj.enfileirar(aux);
                if(ok) {
                    cout<<"\n\tSucesso!!!\n";
                }
                else {
                    cout<<"\n\tErro!!!\n";
                }
                aux=0;

                break;
            case 2://remove pessoa

                aux=obj.desenfileirar();
                if(aux!=0) {
                    cout<<aux->getpessoa();
                }
                else {
                    cout<<"\n\tErro!!!\n";
                }
                aux=0;

                break;
            case 3://mostra pessoa

                mostrarFila();
                break;

            case 4://fecha o programa

                cout<<"\nEncerrado com sucesso! \n";
                break;
            default:
                break;
        }

    }while (x!=4);


}

Pessoa* TestaFila::criarPessoa()
{
    Pessoa *aux=new Pessoa;
    std::string x;
    cout<<"\nDigite o Nome da pessoa : ";
    cin.ignore();
    getline(cin,x);
    aux->setNome(x);

    cout<<"\nDigite o Telefone da pessoa : ";
    cin.ignore();
    getline(cin,x);
    aux->setTelefone(x);

    return aux;
}

void TestaFila::mostrarFila()
{
    Fila aux;
    Pessoa* mostra;


    while(!obj.vazia())
    {
        mostra=obj.desenfileirar();
        cout<<mostra->getpessoa()<<endl;
        aux.enfileirar(mostra);

    }

    while(!aux.vazia())
    {
        obj.enfileirar(aux.desenfileirar());
    }

}
