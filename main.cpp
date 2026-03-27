#include<iostream>
#include<iomanip>

int main(){

int a = 8;
//int número inteiro.
float b = 9.6;
//float número de ponto flutuante ocupa 4bytes.
double c = 4.6276548976;
//double ocupa 8bytes.

 std::cout<<a<<std::endl;
 std::cout<<b<<std::endl;
 std::cout<<c<<std::endl;

std::cout<<std::fixed<<std::setprecision(10)<<c<<std::endl;
//configura o número de caracteres do double, pois ele não pasará de 7 caracteres sem setprecision.
     return 0;
}