#include<iostream>
#include<string>

int main(){

  int idade;

  std::cout<<"Digite sua idade"<<std::endl;
  std::cin>>idade;

  if(idade < 0){
    std::cout<<"Idade invalida!!"<<std::endl;
  }
  else if (idade <=2){
    std::cout<<"Voce e um bebe!"<<std::endl;
  }
  else if(idade <= 8){
    std::cout<<"voce e uma crianca!"<<std::endl;
  }
  else if(idade <= 17){
    std::cout<<"Voce e um(a) adolecente!"<<std::endl;
  }
  else if(idade <= 60){
    std::cout<<"Voce e adulto(a)!"<<std::endl;
  }
    else{
      std::cout<<"Voce e um(a) senior!"<<std::endl;
  }


    return 0;
    }

