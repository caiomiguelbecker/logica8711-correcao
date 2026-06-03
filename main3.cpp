#include<iostream>
#include<string>

    struct Pessoa{
        std::string nome;
        int idade;
        float altura;
    };


int main(){
    
    Pessoa p1 = {"Junior", 20, 1.80};
    Pessoa p2 = {"Calos", 30, 1.70};

    std::cout<<p1.nome<<" tem "<<p1.idade<<" anos"<<" e mede "<<p1.altura<<"m"<<std::endl;
    std::cout<<p2.nome<<" tem "<<p2.idade<<" anos"<<" e mede "<<p2.altura<<"m"<<std::endl;


    
    return 0;
}