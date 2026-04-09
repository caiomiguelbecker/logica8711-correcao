#include<iostream>
#include<string>

int main(){
  
    std::string user;
    std::string senha;

    std::cout<<"Digite seu usuario de acesso: "<<std::endl;
    std::cin>>user;

    std::cout<<"Digte sua senha: "<<std::endl;
    std::cin>>senha;

    if(senha == "12345678"){
      std::cout<<"O usuario "<<user<<" esta logado com sucesso!!"<<std::endl;
    }
    else{
      std::cout<<"Usuario ou senha invalidos!"<<std::endl;
    }


    return 0;
}