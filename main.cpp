#include <iostream>
#include<string>

int main(){

    std::string carros[5] = {"volvo", "bmw", "ford", "chevrolet", "fiat"};

    for(int i = 0; i < 5; i++){ 
      std::cout<<carros[i]<<std::endl;
    }



  return 0;
}