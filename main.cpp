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


void exibirModalides(){

    std::cout<<"================ Bem vindo ao Senac NH ===================="<<std::endl;
    
    std::cout<<"\nDigite 1 para ver curso! "<<std::endl;
    std::cout<<"Digite 2 para ver o curso de idiomas "<<std::endl;
    std::cout<<"Digite 3 para se cadastrar! "<<std::endl;
   

}
void cursos(){
    std::cout<<"Para cursos presenciais digite 1. "<<std::endl;
    std::cout<<"Para cusos EAD digite 2. "<<std::endl;
    std::cout<<"Para idiomas digite 3. "<<std::endl;
}
void cadastroAluno(){
     
    std::cout<<"Digite o nome completo do aluno: "<<std::endl;
    std::getline(std::cin, nomeCompletoAluno);
    std::cout<<"Digite o cpf do aluno: "<<std::endl;
    std::getline(std::cin, cpfAluno);
    std::cout<<"Digite o rg do aluno: "<<std::endl;
    std::getline(std::cin, rgAluno);
    std::cout<<"Digite a data de nascimento do aluno: "<<std::endl;
    std::getline(std::cin, dataDeNascimentoAluno);
    std::cout<<"Digite o contato do aluno: "<<std::endl;
    std::getline(std::cin, contatosAluno);
    std::cout<<"Digite o email do aluno: "<<std::endl;
    std::getline(std::cin, emailAluno);
    std::cout<<"Digite o endereço do aluno: "<<std::endl;
    std::getline(std::cin, enderecoAluno);
    std::cout<<"Digite o cep do aluno: "<<std::endl;
    std::getline(std::cin, cepAluno);
}
void cadastroResponsavelFinaceiro(){
    
    std::cout<<"Digite o nome completo do responsavel financeiro: "<<std::endl;
    std::getline(std::cin, nomeResponsavelFinanceiro);
    std::cout<<"Digite o cpf do responsavel financeiro: "<<std::endl;
    std::getline(std::cin, cpfResponsavelFinanceiro);
    std::cout<<"Digite o rg do responsavel financeiro: "<<std::endl;
    std::getline(std::cin, rgResponsavelFinanceiro);
    std::cout<<"Digite a data de nascimento do aluno: "<<std::endl;
    std::getline(std::cin, dataDeNascimentoAluno);
    std::cout<<"Digite o contato do responsavel Financeiro: "<<std::endl;
    std::getline(std::cin, contatosResponsavelFinanceiro);
    std::cout<<"Digite o email do responsavel Financeiro: "<<std::endl;
    std::getline(std::cin, emailResponsavelFinanceiro);
    std::cout<<"Digite o endereço do responsavel financeiro: "<<std::endl;
    std::getline(std::cin, enderecoResponsavelFinanceiro);
    std::cout<<"Digite o cep do reponsável financeiro: "<<std::endl;
    std::getline(std::cin, cepResponsavelFinanceiro);
}


int main(){

    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos

    exibirModalides();

    int modalidades;
    std::cout<<"\nEscolha uma das opções a cima. "<<std::endl;
    std::cin>>modalidades;

do{
    if(modalidades == 1){
    
        std::cout<<"Você está na área de cursos presenciais !! "<<std::endl;
        std::cout<<"\n Digite 1 para mais informações do curso de TDS (tecnico em desenvolvimento de sistemas). "<<std::endl;
        std::cout<<"Digite 2 para mais informações do curso de tecnico em modelagem. "<<std::endl;
        std::cout<<"Digite 3 para mais informações do curso de tecnico em enfermagem. "<<std::endl;

    }else if(modalidades == 2){
        std::cout<<"Você está na área de cursos EAD !! "<<std::endl;
        std::cout<<"\nDigite 1 para o curso de logística. "<<std::endl;
        std::cout<<"Digite 2 para o curso de administrção. "<<std::endl;
        std::cout<<"Digite 3 para curso de transações imoniliárias. "<<std::endl;
        std::cout<<"Digite 4 para curso de segurança do trabalho. "<<std::endl;
    }else {
        std::cout<<"Você está na área de cursos FIC (cursos livres). "<<std::endl;
        std::cout<<"\n Cursos FIC de moda: "<<std::endl;
        std::cout<<"Digite 1 para curso de técnica de costura. "<<std::endl;
        std::cout<<"Digite 2 para cirso de consultoria de estilo e coloração pessoal. "<<std::endl;
        std::cout<<"Cursos FIC de informática: "<<std::endl;

    }

}while;
 
   std::string opcao;   
    std::cout<< "Se você é seu próprio responsável digite? (s/n) "<<std::endl;
    std::getline(std::cin, opcao);

    if(opcao == "s" || opcao == "S"){
         std::cout<<"Você foi cadastrado com sucesso!!! "<<std::endl;
    }else{
        cadastroResponsavelFinaceiro();
        std::cout<<"\nCadastro finalizado!! "<<std::endl;
    }
    

     return 0;
}