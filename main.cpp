#include<iostream>

int main(){

     int a;
     int b;
     //int a,b;

     std::cout<<"Digite um valor para A: "<<std::endl;
     std::cin>>a;

     std::cout<<"Digite um valor para B: "<<std::endl;
     std::cin>>b;

     std::cout<<(a > b )<<std::endl;
     //Linguagem de máquina: true 1 ----- false 0, binário

     std::cout<<(a >= b)<<std::endl;
     std::cout<<(a != b)<<std::endl;
     



     return 0;
}