#include<iostream>
#include<string>

int main(){

    int opcaoPagamento;
    int qtdParafuso;
    float valorParafuso = 1.40;
    float valorTotalParafuso;
    float desconto;
    float juros;

    std::cout<<"Digite a quantidade de para fusos desejada: "<<std::endl;
    std::cin>>qtdParafuso;

    valorTotalParafuso = qtdParafuso * valorParafuso;

    std::cout<<"qual forma de pagamento? "<<std::endl;
    std::cout<<"--- 1 - pix"<<std::endl;
    std::cout<<"--- 2 - dinheiro"<<std::endl;
    std::cout<<"--- 3 - cartao"<<std::endl;
    std::cin>>opcaoPagamento;

    if(opcaoPagamento == 1){
      std::cout<<"Sua comprar ficou no valor total de R$: "<<valorTotalParafuso<<std::endl;
    }
    else if(opcaoPagamento == 2){
      desconto = valorTotalParafuso * 0.90;
      std::cout<<"sua compra ficou no valor total de R$: "<<desconto<<std::endl;
    }
    else if(opcaoPagamento == 3){
      juros = valorTotalParafuso * 1.10;
      std::cout<<"Sua compra ficou no valor total de R$: "<<juros<<std::endl;
    }
    else{ 
      std::cout<<"Opcao de pagamento inexistente!!"<<std::endl;
    }

    return 0;
}

