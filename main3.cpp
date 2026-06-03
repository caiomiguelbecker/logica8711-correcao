#include<iostream>
#include<string>

    struct Aluno{
        std::string nome;
        float nota1;
        float nota2;
    };

    float calcularMedia(Aluno a){
        return (a.nota1 + a.nota2) / 2;
    }



int main(){
    
    Aluno aluno;
    float nota1;
    float nota2;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>aluno.nome;

    std::cout<<"Digite sua primeira nota: "<<std::endl;
    std::cin>>aluno.nota1;

    std::cout<<"Digite a sua segunda nota: "<<std::endl;
    std::cin>>aluno.nota2;


    std::cout<<"A media do "<<aluno.nome<< " é "<<calcularMedia(aluno)<<std::endl;

  //  Aluno aluno = {"Paulo", 8.0, 9.5};

   // float media = calcularMedia(aluno);

  //  std::cout<<aluno.nome<< " - media: "<<media<<std::endl;


   
    return 0;
}