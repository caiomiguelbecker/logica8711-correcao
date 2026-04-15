#include<iostream>
#include<thread> //para lidard com o tempo de execução
#include<chrono> //para definir unidades de tempo(ms, segundo)
int main(){

    for(int i = 10; i >= 0; i--){
      std::cout<<"A bomba ira explodir em.."<<i<<std::endl;
       std::this_thread::sleep_for(std::chrono::milliseconds(500));
       //igual controlado por segundos = seconds -> milliseconds
    }

   


 
    
    return 0;
}