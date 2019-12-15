#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <vector>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
#include "produto.h"


class estoque
{
public:
    estoque();
    void cadastro(string nome, int qtd);
    void venda(string nome, int qtd);
    void todoEstoque();
    bool consulta(string nome);
    Produto* getProduto(string nome);
private:
    Produto* racao;
    Produto* cama;
    Produto* brinquedo;
    Produto* coleira;

};

#endif // ESTOQUE_H
