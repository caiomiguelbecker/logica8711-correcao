#include <iostream>

int main(){

   int num ;

  do{

   std::cout<<"Digite um numero entre 0 e 10: "<<std::endl;
   std::cin>>num;
  
   if(num < 1 || num > 10){
      std::cout<<"Entrada invalida!!"<<std::endl;
   }

   }while(num < 1 || num > 10);{
        std::cout<<"Obrigado!! Voce escolheu um numero: "<<num<<std::endl;
   }
  
  return 0;
}