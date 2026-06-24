#include<iostream>

int main(){

    int soma;
    int numeros[5] = {1, 2, 3, 4, 5};

    std::cout<<"Números: "<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<numeros[i]<<std::endl;
    
    soma += numeros[i];

    }

    std::cout<<std::endl;

    std::cout<<"Soma dos mesmos números: "<<soma<<std::endl;
    
    

     return 0;
}