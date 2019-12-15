#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

using namespace std;

class Produto
{
public:
    Produto(int id, string nome, float preco, int qtd);
    string getNome();
    int getId();
    float getPreco();
    int getQtd();
    void setQtd(int qtd);
private:
    int id;
    string nome;
    float preco;
    int qtd;
};

#endif // PRODUTO_H
