#include<iostream>
#include<string>

int main(){

    //brlAmount: Valor em reais, | exchengRate: taxa de cambio | usdAmount: valor em dolares;
    double brlAmount, exechangeRate, usdAmount;
    int choice; //choice: escolha;

    std::cout<<" ----- Currency converter: BRL to USD ------"<<std::endl;

    //entrada da taxa de cambio (quanto vale 1 dolar hoje)
    std::cout<<"Enter the current exchange rate (How much is 1 dollar in Reais?): "<<std::endl;
    std::cin>>exechangeRate;

    //Entrada de quantia em reais que a pessoa deseja converter
    std::cout<<"Enter the amout in BRL(R$): "<<std::endl;
    std::cin>>brlAmount;

    //verificar logica: garante que o valor informado seja positivo
    if(brlAmount > 0){
        //calculo: divide o montante em reais pela taxa de cambio
        usdAmount = brlAmount / exechangeRate;
        std::cout<<"You will have $"<<usdAmount<<" US dollars. "<<std::endl;
    }else{
        //mensagem de erro caso o valor seja zero ou negativo
        std::cout<<"Error: Please enter a valid amount greater than zero."<<std::endl;
    }



     return 0;
}