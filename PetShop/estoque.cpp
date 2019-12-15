#include "estoque.h"

estoque::estoque()
{
    //string linha[4]={""};

    int qtds[4]={0};
    ifstream arquivoE;
    arquivoE.open("estoque.txt");

    if(arquivoE.is_open()){
        for(int i = 0; i<4;i++){
            string linha;
            getline(arquivoE, linha);
            qtds[i] = stoi(linha);
        }
    }

    racao = new Produto(0,"Ração",20.0,qtds[0]);
    cama = new Produto(1,"Cama",150.0,qtds[1]);
    brinquedo= new Produto(2,"Brinquedo",10.0,qtds[2]);
    coleira = new Produto(3,"Coleira",20.0,qtds[3]);

    arquivoE.close();
}

Produto* estoque :: getProduto(string nome){
    if (nome == "Ração") {
            return racao;
    }else if(nome == "Cama"){
            return cama;
    }else if(nome == "Brinquedo"){
            return brinquedo;
    }else{
        return coleira;
    }
}

void estoque :: cadastro(string nome, int qtd){
    Produto* prod = getProduto(nome);
    prod -> setQtd(prod->getQtd() + qtd);

    ofstream arquivo;
    arquivo.open("estoque.txt");
    arquivo<<racao->getQtd();
    arquivo<<cama->getQtd();
    arquivo<<brinquedo->getQtd();
    arquivo<<coleira->getQtd();

}
void estoque :: venda(string nome, int qtd){
    Produto* prod = getProduto(nome);
    prod -> setQtd(prod->getQtd() - qtd);

    ofstream arquivo;
    arquivo.open("estoque.txt");
    arquivo<<racao->getQtd();
    arquivo<<cama->getQtd();
    arquivo<<brinquedo->getQtd();
    arquivo<<coleira->getQtd();
}
void estoque :: todoEstoque(){
    cout << "   Nome    " << " Preço   " << "Quantidade   " <<endl;
    cout << "   Ração   " << racao->getPreco() << "   "<< racao->getQtd() <<endl;
    cout << "   Cama    " << racao->getPreco()  << "   "<< racao->getQtd()  <<endl;
    cout << " Brinquedo " << brinquedo->getPreco() << "   "<< brinquedo->getQtd() <<endl;
    cout << "  Coleira  " << coleira->getPreco() << "   "<< coleira->getQtd() <<endl;
}
bool estoque :: consulta(string nome){
    Produto* prod = getProduto(nome);
    if (prod->getQtd() > 0){
        return true;
    }
    return false;
}
