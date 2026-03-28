#include<iostream>
#include<string>

int main(){

std::string nome;
int idade;
float altura;

std::cout<<"qual seu nome: "<<std::endl;
std::cin>>nome;
std::cout<<"qual sua idade: "<<std::endl;
std::cin>>idade;
std::cout<<"qual sua altura: "<<std::endl;
std::cin>>altura;


std::cout<<"welcome, mr. "<<nome<<" !!"<<std::endl;
std::cout<<"Sua idade e altura sao: "<<std::endl;
std::cout<<idade<<" anos."<<std::endl;
std::cout<<altura<<" m."<<std::endl;


     return 0;
}