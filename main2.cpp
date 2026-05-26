#include<iostream>
#include<string>
#include<windows.h>
#include<iomanip>


    std::string nomeCompletoAluno, nomeResponsavelFinanceiro;
    std::string enderecoAluno, enderecoResponsavelFinanceiro;
    std::string nomePai, nomeMae;
    std::string emailAluno, emailResponsavelFinanceiro;
    std::string cepAluno, cepResponsavelFinanceiro; 
    std::string rgAluno, rgResponsavelFinanceiro;
    std::string cpfAluno, cpfResponsavelFinanceiro;
    std::string contatosAluno, contatosResponsavelFinanceiro;
    std::string dataDeNascimentoAluno, dataDeNascimentoResponsavelFinanceiro;


void cadastro(){
    std::cout<<"\ncadastro aluno.\n"<<std::endl;
    std::cout<<"Digite o nome completo:"<<std::endl;
    std::getline(std::cin, nomeCompletoAluno);
    std::cout<<"Digite o cpf: "<<std::endl;
    std::getline(std::cin, cpfAluno);
    std::cout<<"Digite o rg: "<<std::endl;
    std::getline(std::cin, rgAluno);
    std::cout<<"Digite a data de nascimento: "<<std::endl;
    std::getline(std::cin, dataDeNascimentoAluno);
    std::cout<<"Digite o contato: "<<std::endl;
    std::getline(std::cin, contatosAluno);
    std::cout<<"Digite o email: "<<std::endl;
    std::getline(std::cin, emailAluno);
    std::cout<<"Digite o endereço: "<<std::endl;
    std::getline(std::cin, enderecoAluno);
    std::cout<<"Digite o cep: "<<std::endl;
    std::getline(std::cin, cepAluno);
}
void curso(){
    std::cout<<"Para cursos presenciais digite 1. "<<std::endl;
    std::cout<<"Para cusos EAD digite 2. "<<std::endl;
    std::cout<<"Para idiomas digite 3. "<<std::endl;
}



int main(){

//menu inicial;

int menu;

do{

std::cout<<"================ Bem vindo ao Senac NH =================\n"<<std::endl;

std::cout<<"Digite 1 para cadastrar se.\n "<<std::endl;
std::cout<<"Digite 2 para logar.\n "<<std::endl;
std::cout<<"Digite 3 para cursos.\n "<<std::endl;
std::cout<<"Digite 0 para sair.\n "<<std::endl;

std::cout<<"Escolha: ";
std::cin >> menu;
   
} while(menu != 0);


switch(menu){

   case 1:
    cadastro();
   break;
   
   case 2:
    curso();
   break;
}










    return 0;
}