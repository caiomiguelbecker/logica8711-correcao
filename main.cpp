#include<iostream>
#include<string>

int main(){

    int choice;
    float temp, converted;

    std::cout<<"----- Temperatura converter ------"<<std::endl;
    std::cout<<"1: Celsius to Fahrenheit"<<std::endl;
    std::cout<<"2: Fahreinheit to Celsius"<<std::endl;
    std::cout<<"Choose on option (1 or 2): "<<std::endl;
    std::cin>>choice;

    if(choice == 1){
        std::cout<<"Enter temperatura in Celsius: "<<std::endl;
        std::cin>>temp;
        converted = (temp * 1.8) + 32;
        std::cout<<temp<<"C is "<<converted<<" F."<<std::endl;
    }else if(choice == 2){
        std::cout<<"Enter temperature in Fahrenheit: "<<std::endl;
        std::cin>>temp;
        converted = (temp - 32) / 1.8;
        std::cout<<temp<<"F is "<<converted<<" C."<<std::endl;
    }else{
        std::cout<<"Invalid option! Please restart."<<std::endl;
    }




     return 0;
}