#include<iostream>
#include<vector>

int main(){

    std::vector<int>numeros;

    std::cout<<"\n==== Soma dos numeros de um Vector ===="<<std::endl;
    
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
      
    int soma;
 
    for(int i = 0; i < 4; i++){
        std::cout<<"["<<numeros[i]<<"], ";
        soma += numeros[i];
    }
    std::cout<<"\nA soma dos numeros e: "<<soma<<std::endl;

    return 0;
}