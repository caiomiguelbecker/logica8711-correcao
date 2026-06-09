#include<iostream>
#include<string>
#include<windows.h>
#include<iomanip>

    // Variáveis globais para armazenar os dados do aluno e do responsável financeiro.

    std::string nomeCompletoAluno, nomeResponsavelFinanceiro;
    std::string enderecoAluno, enderecoResponsavelFinanceiro;
    std::string nomePai, nomeMae;
    std::string emailAluno, emailResponsavelFinanceiro;
    std::string cepAluno, cepResponsavelFinanceiro; 
    std::string rgAluno, rgResponsavelFinanceiro;
    std::string cpfAluno, cpfResponsavelFinanceiro;
    std::string contatosAluno, contatosResponsavelFinanceiro;
    std::string dataDeNascimentoAluno, dataDeNascimentoResponsavelFinanceiro; 

// protótipos das funções.

void menu();
void cadastro();
void cursosPresenciais();
void cursosEAD();

// informações sobre os cursos EAD, como duração, valor, etc.

void infoLogistica(){

    int op;

    std::cout << "------------------------------------" <<std::endl;
    std::cout << "---------curso de logística---------" <<std::endl;
    std::cout << "------------------------------------\n" <<std::endl;
    std::cout << "Valor total: " << std::endl;
    std::cout << "R$ 3.751,00\n" <<std::endl;
    std::cout << "Parcelamento: " << std::endl;
    std::cout << "Até 22x de aproximandamente R$ 166,00" <<std::endl;
    std::cout << "Com entrada mínima de R$ 99,00\n" <<std::endl;
    std::cout << "Duração: "<<std::endl;
    std::cout << "12 meses (800 horas)\n" <<std::endl;
    std::cout << "Docentes: " << std::endl;
    std::cout << "Equipe de professores altamente qualificada, com experiência prática e conhecimento atualizado na área de logística." <<std::endl;
    std::cout << "Com equipe extrena do Senac." <<std::endl;
    
    std::cout << "\nGostaria de saber as possíveis formas de pagamento?\n1 - SIM ( EM DESENVOLVIMENTO )\n2 - NÃO "<<std::endl;
    std::cin >> op;
    
    do{

    switch(op){
        
        case 1:
            std::cout << "tem que fazer" << std::endl;
        break;

        case 2:
            system("cls");
            return;
       
        default:
            std::cout << "Opção inválida." << std::endl;
        break;
    }
}while (true);



}
void infoadministracao(){

    int op;

    std::cout << "------------------------------------" <<std::endl;
    std::cout << "-------curso de administração-------" <<std::endl;
    std::cout << "------------------------------------\n" <<std::endl;
    std::cout << "Valor total: " << std::endl;
    std::cout << "R$ 3.751,00\n" <<std::endl;
    std::cout << "Parcelamento: " << std::endl;
    std::cout << "Até 22x de aproximandamente R$ 166,00" <<std::endl;
    std::cout << "Com entrada mínima de R$ 99,00\n" <<std::endl;
    std::cout << "Duração: "<<std::endl;
    std::cout << "12 meses (800 horas)\n" <<std::endl;
    std::cout << "Docentes: " << std::endl;
    std::cout << "Equipe de professores altamente qualificada, com experiência prática e conhecimento atualizado na área de administração." <<std::endl;
    std::cout << "Com equipe extrena do Senac." <<std::endl;

    std::cout << "\nGostaria de saber as possíveis formas de pagamento?\n1 - SIM ( EM DESENVOLVIMENTO )\n2 - NÃO "<<std::endl;
    std::cin >> op;
    
    do{

    switch(op){
        
        case 1:
            std::cout << "tem que fazer" << std::endl;
        break;

        case 2:
            system("cls");
            return;
       
        default:
            std::cout << "Opção inválida." << std::endl;
        break;
    }
}while (true);


}
void infoTransacoesImobiliarias(){

    int op;

    std::cout << "------------------------------------" <<std::endl;
    std::cout << "---curso de transações imobiliárias---" <<std::endl;
    std::cout << "------------------------------------\n" <<std::endl;
    std::cout << "Valor total: " << std::endl;
    std::cout << "R$ 3.157,00\n" <<std::endl;
    std::cout << "Parcelamento: " << std::endl;
    std::cout << "Até 22x de aproximandamente R$ 143,00" <<std::endl;
    std::cout << "Com entrada mínima de R$ 99,00\n" <<std::endl;
    std::cout << "Duração: "<<std::endl;
    std::cout << "12 meses (800 horas)\n" <<std::endl;
    std::cout << "Docentes: " << std::endl;
    std::cout << "Equipe de professores altamente qualificada, com experiência prática e conhecimento atualizado na área de transações imobiliárias." <<std::endl;
    std::cout << "Com equipe extrena do Senac." <<std::endl;

    std::cout << "\nGostaria de saber as possíveis formas de pagamento?\n1 - SIM ( EM DESENVOLVIMENTO )\n2 - NÃO "<<std::endl;
    std::cin >> op;
    
    do{

    switch(op){
        
        case 1:
            std::cout << "tem que fazer" << std::endl;
        break;

        case 2:
            system("cls");
            return;
       
        default:
            std::cout << "Opção inválida." << std::endl;
        break;
    }
}while (true);
}
void infoSegurancaDoTrabalho(){

    int op;

    std::cout << "------------------------------------" <<std::endl;
    std::cout << "-----curso de segurança do trabalho-----" <<std::endl;
    std::cout << "------------------------------------\n" <<std::endl;
    std::cout << "Valor total: " << std::endl;
    std::cout << "R$ 3.355,00 podendo variar de R$ 3.300,00 a 3.500,00.\n" <<std::endl;
    std::cout << "Parcelamento: " << std::endl;
    std::cout << "Até 22x de aproximandamente R$ 148,00." <<std::endl;
    std::cout << "Com entrada mínima de R$ 99,00.\n" <<std::endl;
    std::cout << "Duração: "<<std::endl;
    std::cout << "12 meses (800 horas).\n" <<std::endl;
    std::cout << "Docentes: " << std::endl;
    std::cout << "Equipe de professores altamente qualificada, com experiência prática e conhecimento atualizado na área de segurança do trabalho." <<std::endl;
    std::cout << "Com equipe extrena do Senac." <<std::endl;

    std::cout << "\nGostaria de saber as possíveis formas de pagamento?\n1 - SIM ( EM DESENVOLVIMENTO )\n2 - NÃO "<<std::endl;
    std::cin >> op;
    
    do{

    switch(op){
        
        case 1:
            std::cout << "tem que fazer" << std::endl;
        break;

        case 2:
            system("cls");
            return;
       
        default:
            std::cout << "Opção inválida." << std::endl;
        break;
    }
    }while (true);
}

// Funções para cada opção do menu.

void cursosEAD(){


    std::cout << "\nCursos EAD selecionados." << std::endl;

    std::cout << "\n1 - Curso de logística." <<std::endl;
    std::cout << "2 - Curso de administração." <<std::endl;
    std::cout << "3 - Curso de transações imobiliárias." <<std::endl;
    std::cout << "4 - Curso de segurança do trabalho." <<std::endl;
    std::cout << "5 - menu principal." <<std::endl;
    std::cout << "0 - Sair." << std::endl;

    int opcao;
    
    do{
        std::cout << "Digite o número correspondente ao curso desejado: ";
        std::cin >> opcao;

    switch(opcao){
        case 1:
            infoLogistica();
            break;
        case 2:
            infoadministracao();
            break;
        case 3:
            infoTransacoesImobiliarias();
            break;
        case 4:
            infoSegurancaDoTrabalho();
            break;
        case 5:
            return menu();
            break;
        case 0:
            std::cout << "Saindo do programa. Até logo!" << std::endl;
            break;
        default:
            std::cout << "Opção inválida. Por favor, tente novamente." << std::endl;
    }
    } while (true);

}
void cursosPresenciais(){
    std::cout << "Cursos presenciais selecionados." << std::endl;
}
void cadastro(){
    std::cin.ignore(); // Limpar o buffer de entrada antes de usar getline

    std::cout << "Cadastro de aluno selecionado.\n" << std::endl;

    //Variável de controle do loop
    bool cadastroValido = false;

    do {

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

    if (nomeCompletoAluno.empty() || cpfAluno.empty() || rgAluno.empty() || dataDeNascimentoAluno.empty() || contatosAluno.empty() || emailAluno.empty() || enderecoAluno.empty() || cepAluno.empty()) {
        std::cout << "Erro: Todos os campos devem ser preenchidos. Por favor, tente novamente." << std::endl;

        cadastroValido = false; // Definir como falso para repetir o cadastro.

    }else {
        std::cout << "Cadastro do aluno realizado com sucesso!" << std::endl; // cadastro realizado com sucesso.

        // Informa que está tudo certo e vai quebrar o loop
            cadastroValido = true;      
    }             
    
}while (!cadastroValido);


std::cout<<"Você é seu proprio responsável financeiro? (s/n)"<<std::endl;
    char resposta;
    std::cin>> resposta;

    if(resposta == 's' || resposta == 'S'){
        std::cout<<"\nComo você é seu proprio responsável financeiro, vamos usar os mesmos dados do aluno para o cadastro do responsável financeiro."<<std::endl;
        nomeResponsavelFinanceiro = nomeCompletoAluno;
        cpfResponsavelFinanceiro = cpfAluno;
        rgResponsavelFinanceiro = rgAluno;
        dataDeNascimentoResponsavelFinanceiro = dataDeNascimentoAluno;
        contatosResponsavelFinanceiro = contatosAluno;
        emailResponsavelFinanceiro = emailAluno;
        enderecoResponsavelFinanceiro = enderecoAluno;
        cepResponsavelFinanceiro = cepAluno;

        std::cout << "\nCadastro do responsável financeiro realizado com sucesso!" << std::endl; // cadastro realizado com sucesso.
    } else {

    std::cin.ignore(); // Limpar o buffer de entrada antes de usar getline


    // Variável de controle do loop
    bool cadastroValido = false;

    do {

    std::cout<<"Digite o nome completo do responsável financeiro: "<<std::endl;
    std::getline(std::cin, nomeResponsavelFinanceiro);
    std::cout<<"Digite o cpf do responsável financeiro: "<<std::endl;
    std::getline(std::cin, cpfResponsavelFinanceiro);
    std::cout<<"Digite o rg do responsável financeiro: "<<std::endl;
    std::getline(std::cin, rgResponsavelFinanceiro);
    std::cout<<"Digite a data de nascimento do responsável financeiro: "<<std::endl;
    std::getline(std::cin, dataDeNascimentoResponsavelFinanceiro);
    std::cout<<"Digite o contato do responsável financeiro: "<<std::endl;
    std::getline(std::cin, contatosResponsavelFinanceiro);
    std::cout<<"Digite o email do responsável financeiro: "<<std::endl;
    std::getline(std::cin, emailResponsavelFinanceiro);
    std::cout<<"Digite o endereço do responsável financeiro: "<<std::endl;
    std::getline(std::cin, enderecoResponsavelFinanceiro);
    std::cout<<"Digite o cep do responsável financeiro: "<<std::endl;
    std::getline(std::cin, cepResponsavelFinanceiro);

     if (nomeResponsavelFinanceiro.empty() || cpfResponsavelFinanceiro.empty() || rgResponsavelFinanceiro.empty() || dataDeNascimentoResponsavelFinanceiro.empty() || contatosResponsavelFinanceiro.empty() || emailResponsavelFinanceiro.empty() || enderecoResponsavelFinanceiro.empty() || cepResponsavelFinanceiro.empty()) {
        std::cout << "Erro: Todos os campos devem ser preenchidos. Por favor, tente novamente." << std::endl;

        cadastroValido = false; // Definir como falso para repetir o cadastro.

    }else {
        std::cout << "Cadastro do responsável financeiro realizado com sucesso!" << std::endl; // cadastro realizado com sucesso.

        // Informa que está tudo certo e vai quebrar o loop
            cadastroValido = true;      
    }
    }while(!cadastroValido);

    
    }

}  
void menu(){
    std::cout << "================ Bem vindo ao Senac nh ===================\n" <<std::endl;
    std::cout << "1 - Cadastro aluno" <<std::endl;
    std::cout << "2 - Cursos presenciais" <<std::endl;
    std::cout << "3 - Cursos EAD" <<std::endl;
    std::cout << "0 - Sair" << std::endl;

    int opcao;

    do{
        std::cout << "Digite a opção desejada: ";
        std::cin >> opcao;

        switch (opcao){
            case 1:
                cadastro();
                break;
            case 2:
                cursosPresenciais();
                break;
            case 3:
                cursosEAD();
                break;
            case 0:
                std::cout << "Saindo do programa. Até logo!" << std::endl;
                exit(0);
            default:
                std::cout << "Opção inválida. Por favor, tente novamente." << std::endl;
        }
    } while (true);
}



int main(){

    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos

    
    menu();
    


     return 0;
}