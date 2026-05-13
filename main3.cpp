#include<iostream>

double saldo = 1000.0;
    std::string titular = "Seu nome";


void exibirSaldo(){
    std::cout<<titular<<" --- Saldo: R$ "<<saldo<<std::endl;
}

void depositar (double valor){
    if(valor > 0){
        saldo += valor;
        std::cout<<"Depósito realizado com sucesso!"<<std::endl;
    }else{
        std::cout<<"Valor inválido!"<<std::endl;
    }
}

void sacar(double valor){
    if(valor > 0 && valor <= saldo){
        saldo -=valor;
        std::cout<<"Saldo insuficiente ou valor inválido!"<<std::endl;
    }
}

void exibirMenu(){
    std::cout<<"\n ===  MENU CONTA BANCÁRIA ==="<<std::endl;
    std::cout<<"1 - ver saldo\n"<<std::endl;
    std::cout<<"2 - deposito\n"<<std::endl;
    std::cout<<"3 - sacar\n"<<std::endl;
    std::cout<<"4 - sair\n"<<std::endl;
    std::cout<<"Digite uma opção: ";
}

int main(){

    int opcao;
    double valor;

    do{
        exibirMenu();
        std::cin>>opcao;

    switch(opcao){
        
        case 1:
        exibirSaldo();
        break;

        case 2:
        std::cout<<"Digite o valor depositado: ";
        std::cin>>valor;
        depositar(valor);
        break;

        case 3:
        std::cout<<"Digite o valor a sacar: ";
        std::cin>>valor;
        sacar(valor);
        break;

        case 4:
        std::cout<<"Saindo da conta..."<<std::endl;
        break;

        default:
        std::cout<<"Opção inválida!"<<std::endl;
    }    
  
    }while(opcao != 4);
    


    return 0;
}