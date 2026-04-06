#include<iostream>
#include<string>

int main(){


std::string nome;
std::string sobrenome = " becker";


std::cout<<"digite sue nome: "<<std::endl;
std::cin>>nome;

std::cout<<nome.append(sobrenome);




     return 0;
}