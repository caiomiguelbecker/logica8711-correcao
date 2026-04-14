#include<iostream>
#include<string>

int main(){

   std::string nome;
   int idade;
   float altura;

    std::cout<<"\nBem vindo, a melhor a cademia de natacao do pais!! "<<std::endl;
  
    std::cout<<"Qual seu nome? "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual sua idade? "<<std::endl;
    std::cin>>idade;

    std::cout<<"Qual sua altura? "<<std::endl;
    std::cin>>altura;


    if (idade < 0){
      std::cout<<"Idade invalida"<<std::endl;
    }
    else if (idade <= 10 ){
      std::cout<<"\nola "<<nome<<std::endl;
      std::cout<<"Voce esta na categoria infantil. "<<std::endl;
      std::cout<<"Suas piscinas ficam no setor oeste, piscinas pequenas. "<<std::endl;
      std::cout<<"Sua altura e: "<<altura<<" m. "<<std::endl;
    }
    else if(idade <= 18){
      std::cout<<"\nola "<<nome<<std::endl;
      std::cout<<"Voce esta na categoria juvenil. "<<std::endl;
      std::cout<<"Suas piscinas ficam no setor norte, piscinas grandes. "<<std::endl;
      std::cout<<"Sua altura e: "<<altura<< " m. "<<std::endl;
    }
    else if (idade <= 60){
      std::cout<<"\nola "<<nome<<std::endl;
      std::cout<<"Voce esta na categoria da melhor idade. "<<std::endl;
      std::cout<<"Suas piscinas ficam no setor leste, piscinas medias. "<<std::endl;
      std::cout<<"Sua altura e: "<<altura<<" m."<<std::endl;
    }
    

     
      
      
      
    
    return 0;
}
