#include<iostream>
#include<string>
#include<iomanip>

int main(){

     std::string nome;
     int idade;
     int anoatual = 2026;

     std::cout<<"Qual seu nome? "<<std::endl;
     std::cin>>nome;
     std::cout<<"Qual sua idade? "<<std::endl;
     std::cin>>idade;
     std::cout<<(anoatual - idade)<<std::endl;

     std::cout<<"Seu nome e: "<<nome<<std::endl;
     std::cout<<"Sua idade e: "<<idade<<std::endl;
     std::cout<<"Seu ano de nascimento e: "<<anoatual - idade<<std::endl;
     



     return 0;
}