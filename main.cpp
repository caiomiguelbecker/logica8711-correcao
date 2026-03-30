#include<iostream>

int main(){

     int a;
     int b;
     //int a,b;

     std::cout<<"Digite um valor para A: "<<std::endl;
     std::cin>>a;

     std::cout<<"Digite um valor para B: "<<std::endl;
     std::cin>>b;

     std::cout<<"A comparacao das variaveis: "<<std::endl;

     std::cout<<(a > b )<<std::endl;
     //Linguagem de máquina: true 1 ----- false 0, binário

     std::cout<<(a >= b)<<std::endl;
     // >= maior ou igual 

     std::cout<<(a != b)<<std::endl;
     // != se o numero é diferente do outro

     std::cout<<(a == b)<<std::endl;
     // == para peguntar se é igual



     return 0;
}