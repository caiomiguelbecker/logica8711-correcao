#include<iostream>
#include<string>

int main(){

  int idade;

  std::cout<<"digite sua idade"<<std::endl;
  std::cin>>idade;

  if(idade >= 18){
    std::cout<<"Voce e maior de idade!"<<std::endl;
  }
  else{
    std::cout<<"Voce e menor de idade!!"<<std::endl;
  }


    
    return 0;
    }

