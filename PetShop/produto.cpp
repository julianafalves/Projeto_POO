#include "produto.h"

Produto::Produto(int id, string nome, float preco, int qtd):id(id),nome(nome),preco(preco),qtd(qtd){
}
int Produto ::getId(){
    return id;
}
float Produto :: getPreco(){
    return preco;
}
int Produto :: getQtd(){
    return qtd;
}
void Produto :: setQtd(int qtd){
    this->qtd = qtd;
}
