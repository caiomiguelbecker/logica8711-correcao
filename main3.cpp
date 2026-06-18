#include<iostream>
#include<string>

struct jogador{
    std::string nome;
    int cartaoAmarelo;
    int cartaoVermelho;
};

int main(){

    std::cout<<"===== REGISTRO DE CARTÕES ====="<<std::endl;

    jogador Jogador;

    std::cout<<"Nome jogador: "<<std::endl;
    std::cin>>Jogador.nome;

    std::cout<<"Cartões amarelos: "<<std::endl;
    std::cin>>Jogador.cartaoAmarelo;

    std::cout<<"Cartões vermelhos: "<<std::endl;
    std::cin>>Jogador.cartaoVermelho;

    std::cout<<std::endl;
    std::cout<<"===== SITUAÇÃO ====="<<std::endl;

    if(Jogador.cartaoVermelho > 0){
        std::cout<<Jogador.nome<<" foi expluso!"<<std::endl;
    }else if(Jogador.cartaoAmarelo >= 2){
        std::cout<<Jogador.cartaoAmarelo<<" recebeu 2 amarelos e foi expulso!"<<std::endl;
    }else if(Jogador.cartaoAmarelo == 1){
        std::cout<<Jogador.nome<<" recebeu 1 amarelo. Cuidado!"<<std::endl;
    }else{
        std::cout<<Jogador.nome<<" está limpo!"<<std::endl;
    }
    return 0;
}

