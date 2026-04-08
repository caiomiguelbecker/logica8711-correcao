#include<iostream>
#include<string>

int main(){
  
    int soma,sub,div,mult;
    int num1,num2,num3,num4,num5,num6,num7,num8;

    std::cout<<"Escolha um numero para somar com o proximo: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Escolha o proximo numero: "<<std::endl;
    std::cin>>num2;
    std::cout<<"\nA soma dos dois numeros e: "<<(num1 + num2)<<std::endl;


    std::cout<<"Escolha um numero para subtrair do proximo: "<<std::endl;
    std::cin>>num3;
    std::cout<<"Escolha o proximo numero da subtração: "<<std::endl;
    std::cin>>num4;
    std::cout<<"\nA subtracao dos numeros e: "<<(num3 - num4)<<std::endl;


    std::cout<<"Escolha um numero para multiplicar com o proximo: "<<std::endl;
    std::cin>>num5;
    std::cout<<"Escolha o numero para multiplicar: "<<std::endl;
    std::cin>>num6;
    std::cout<<"\nA multiplicaçao e: "<<(num5 * num6)<<std::endl;


    std::cout<<"\nEscolha um numero para dividir com o proximo: "<<std::endl;
    std::cin>>num7;
    std::cout<<"\nEscolha o numero para dividir: "<<std::endl;
    std::cin>>num8;
    std::cout<<"\n\nA divisao e: "<<(num7 / num8)<<std::endl;

    std::cout<<"Todos os resultados listados foram: "<<std::endl;
    std::cout<<"\nAdicao: "<<(num1 + num2)<<std::endl;
    std::cout<<"\nSubtracao: "<<(num3 - num4)<<std::endl;
    std::cout<<"\nMultiplicacao: "<<(num5 * num6 )<<std::endl;
    std::cout<<"\ndivisao: "<<(num7 / num8)<<std::endl;


    std::cout<<" \n\nObrigado por utilizar o programa!!!"<<std::endl;
    
    



    return 0;
}