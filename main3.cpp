#include<iostream>

int main(){

    int num1, num2, soma, subt, mult;
    float div;
    int op;

    std::cout<<"Digite aqui o valor para o numero 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite aqui o valor para o numero 2: "<<std::endl;
    std::cin>>num2;

    std::cout<<"---------- Escolha a operacao -----------\n"<<std::endl;
    std::cout<<"1 - soma\n";
    std::cout<<"2 - Subtracao\n";
    std::cout<<"3 - Multiplicacao\n";
    std::cout<<"4 - divisao\n";
    std::cin>>op;

    switch(op){
        case 1:
        soma = num1 + num2;
        std::cout<<"o resultado da soma e: "<<soma<<std::endl;
        break;

        case 2:
        subt = num1 - num2;
        std::cout<<"O resultado da subtracao e: "<<subt<<std::endl;
        break;

        case 3:
        mult = num1 * num2;
        std::cout<<"O resultado da multicacao e: "<<mult<<std::endl;
        break;

        case 4:
        div = num1 / num2;
        std::cout<<"O resultado da divisao e: "<<div<<std::endl;
        break;

        default:
        std::cout<<"Voce nao digitou nenhum valor valido! "<<std::endl;
    }


    
   
    
   

  



    return 0;
}