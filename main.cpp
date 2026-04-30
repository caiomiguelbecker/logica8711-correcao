#include<iostream>
#include<string>

int main(){

    int num;

    std::cout<<"Digite um valor para num: "<<std::endl;
    std::cin>>num;


    if(num % 2 == 0){
        std::cout<<num<<"O numero digitado e par "<<std::endl;

    }else{
        std::cout<<num<<"O numero digitado e impar "<<std::endl;
   
    }






     return 0;
}