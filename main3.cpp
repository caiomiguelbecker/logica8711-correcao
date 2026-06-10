#include<iostream>
#include<string>

struct Produtos{
    int id;
    std::string descricao;
    float preco;
};

Produtos produtos[50];
int totalProdutos = 0;

void adicionarProduto(){
    std::cout<<" --- Adicionar produto ---"<<std::endl;

    std::cout<<"ID: "<<std::endl;
    std::cin>>produtos[totalProdutos].id;

    std::cin.ignore();
    std::cout<<"descrição: "<<std::endl;
    std::cin>>produtos[totalProdutos].descricao;

    std::cin.ignore();
    std::cout<<"Preço: "<<std::endl;
    std::cin>>produtos[totalProdutos].preco;

    produtos[totalProdutos].preco = false;

    totalProdutos++;
    std::cout<<"Produto adicionado!\n"<<std::endl;
}

std::string status;

void exibir(){
    if(totalProdutos == 0){
            std::cout<<"\nNenhuma produto!"<<std::endl;
            return;
        }
            std::cout<<"\n--- Produtos ---"<<std::endl;
        for(int i = 0; i < totalProdutos; i++){
            std::string status = produtos[i].preco ? "S" : "N";
            std::cout<<"["<<status<<"]"<<produtos[i].id<<" - "<<produtos[i].descricao<<std::endl;
           
    }
}


void deletarProduto(){

    int idProduto;

    std::cout<<"--- Deletar produto ---\n"<<std::endl;
    std::cout<<"Qual o ID do produto que deseja deletar: "<<std::endl;
    std::cin>>idProduto;

    for(int i = 0; i < totalProdutos; i++){
        if(produtos[i].id == idProduto){
            for(int j = i; j < totalProdutos - 1; j++){
                produtos[j] = produtos[j + 1];
            }
            totalProdutos--;
            std::cout<<"Produto deletado com sucesso!"<<std::endl;
            return;
        }
    }
}


void menu(){
    std::cout<<"\n1. adionar"<<std::endl;
    std::cout<<"2. exibir"<<std::endl;
    std::cout<<"3. Deletar"<<std::endl;
    std::cout<<"4. Sair"<<std::endl;
    std::cout<<"\n Escolha: "<<std::endl;
}




int main(){
    

    while(true){

    menu();

    int op;
    std::cin>>op;

    std::cout<<"\n"<<std::endl;

    switch(op){

        case 1: 
            adicionarProduto();
            break;
        
        case 2:
            exibir();
            break;

        case 3:
            deletarProduto();
            break;

        case 4: 
            std::cout<<"Até logo!!"<<std::endl;
            return 0;
        
        default:
            std::cout<<"Opção inválida, tente novamente"<<std::endl;
            break;
    }
    
    }
    
}