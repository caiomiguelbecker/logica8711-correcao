#include<iostream>

int main(){

//  1. LER E EXIBIR

// Crie um programa que leia 5 números e exiba-os na tela.
  
//   int numeros[] = {10, 20, 30, 40, 50};
//     std::cout<<"Números: "<<std::endl;
//     for(int i = 0; i < 5; i++){
//         std::cout<<numeros[i]<<std::endl;
//     }


// 2. Soma simples
// Leia 5 números e calcule a soma total.

//  int soma;
//     int numeros[5] = {1, 2, 3, 4, 5};
//     std::cout<<"Números: "<<std::endl;
//     for(int i = 0; i < 5; i++){
//         std::cout<<numeros[i]<<std::endl;
//     soma += numeros[i];
//     }
//     std::cout<<std::endl;
//     std::cout<<"Soma dos mesmos números: "<<soma<<std::endl;


// 3. Encontrar maior
// Leia 5 números e encontre o maior deles.

    // int numeros[5] = {1, 2, 3, 4, 5};
    // int maior = numeros[0];

    // std::cout<<"Números: "<<std::endl;
    // for(int i = 0; i < 5; i++){
    //     std::cout<<numeros[i]<<std::endl;
    //     maior = numeros[i];
    // }
    // std::cout<<std::endl;
    // std::cout<<"O maior numero é "<<maior<<std::endl;

//     4. Encontrar menor
// Leia 5 números e encontre o menor deles.

    // int numeros[5] = {1, 2, 3, 4, 5};
    // int menor = numeros[0];

    // std::cout<<"Números: "<<std::endl;
    // for(int i = 0; i < 5; i++){
    //     std::cout<<numeros[i]<<std::endl;
    //     if (numeros[0] <= menor){
    //         numeros[0] = menor;
    //     }
    // }
    // std::cout<<std::endl;
    // std::cout<<"O menor numero é "<<menor<<std::endl;

//     5. Calcular média
// Leia 5 números, calcule a média e exiba.

    // int numeros[5] = {10, 20, 30, 40, 50};
    // float soma;
    // float media;

    // for(int i = 0; i < 5; i++){
    //     std::cout<<numeros[i]<<std::endl;
    //     soma += numeros[i];
    // }
    // media = soma / 5;
    // std::cout<<"O total é "<<soma<<std::endl;
    // std::cout<<"Media: "<<media<<std::endl;
    
//     6. Contar elementos
// Leia um array com 10 números e exiba quantos elementos tem.

    // int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // std::cout<<"Os elementos do array são: "<<std::endl;
    // for(int i = 0; i < 10; i++){
    //     std::cout<<numeros[i]<<std::endl;
    // }
    
    
//     7. Exibir pares
// Leia 10 números e exiba apenas os pares.

    // int numeros[10] = {10, 23, 30, 47, 50, 60, 70, 80, 95, 100};

    // std::cout<<"Os elementos pares do array são: "<<std::endl;
    // for(int i = 0; i < 10; i++){
    //     if(numeros[i] % 2 == 0){
    //         std::cout<<numeros[i]<<std::endl;
    //     }
    // }


//     8. Exibir ímpares
// Leia 10 números e exiba apenas os ímpares.

    // int numeros[10] = {10, 23, 30, 47, 50, 60, 70, 80, 95, 100};

    // std::cout<<"Os elementos impares do array são: "<<std::endl;
    // for(int i = 0; i < 10; i++){
    //     if(numeros[i] % 2 != 0){
    //         std::cout<<numeros[i]<<std::endl;
    //     }
    // }

//     9. Inverter array
// Leia 5 números e exiba-os em ordem inversa.

    // int numeros[5] = {10, 20, 30, 40, 50};

    // for(int i = 4; i >= 0; i--){
    //     std::cout<<numeros[i]<<std::endl;
    // }


    // 10. Contar ocorrências
// Leia 10 números e conte quantas vezes aparece o número 5.

    // int numeros[10] = {10, 20, 30, 45, 5, 60, 70, 85, 95, 100};
    // int contador = 0;

    // for(int i = 0; i < 10; i++){
    //     if(numeros[i] == 5){
    //         contador += 1;
    //     }
    // }
    // std::cout<<contador<<std::endl;


//     11. Buscar elemento
// Leia 10 números e procure por um número específico. Se encontrar, exiba a posição.

    // int numeros[10] = {10, 23, 30, 47, 50, 60, 70, 80, 95, 100};
    // int buscado;

    // std::cout<<"Digite o numero que deseja buscar: "<<std::endl;
    // std::cin>>buscado;

    // for(int i = 0; i < 10; i++){
    //     if(numeros[i] == buscado){
    //         std::cout<<"Numero buscado encontrado! Na posição "<<i<<std::endl;
    //         return 0;
    //     }  
    // }
    // std::cout<<"Numero não encontrado"<<std::endl;
    
    
//     12. Números acima da média
// Leia 8 números, calcule a média e exiba quais estão acima dela.

    // int numeros[8] = {4, 5, 6, 7, 8, 9, 2, 3};
    // int soma = 0;
    // int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // for(int i = 0; i < 8; i++){
    //     soma += numeros[i];
    // }
    // soma = soma / tamanho;

    // std::cout<<"A media é: "<<soma<<std::endl;

    // for(int j = 0; j < 8; j++){
    //     if(numeros[j] > soma){
    //         std::cout<<"Os numeros que estão acima da média dentro do array são: "<<numeros[j]<<std::endl;
    //     }
    // }


//     13. Maior e menor
// Leia 10 números e encontre tanto o maior quanto o menor em um mesmo programa


    // int numeros[10] = {10, 23, 30, 47, 50, 60, 70, 80, 95, 100};
    // int maior = numeros[0];
    // int menor = numeros[0];

    // for(int i = 0; i < 10; i++){
    //     for(int j = 0; j < 10; j++){
    //         if(numeros[i] > maior){
    //             maior = numeros[i];
    //         }
    //         if(numeros[j] < menor){
    //             menor = numeros[j];
    //         }
    //     }
    // }

    // std::cout<<"O maior número é: "<<maior<<std::endl;
    // std::cout<<"O menor número é: "<<menor<<std::endl;


//     14. Soma de pares
// Leia 10 números e some apenas os números pares.


    // int numeros[10] = {10, 23, 30, 47, 50, 60, 70, 80, 95, 100};
    // int soma = 0;

    // for(int i = 0; i < 10; i++){
    //     if(numeros[i] % 2 == 0){
    //         soma += numeros[i];
    //     }
    // }
    // std::cout<<"A soma dos números pares é: "<<soma<<std::endl;


//     15. Contar positivos e negativos
// Leia 10 números e conte quantos são positivos e quantos são negativos.

    int numeros[10] = {10, -23, 30, -47, 50, -60, 70, -80, -95, -100};
    int positivos = 0;
    int negativos = 0;

    for(int i =0; i < 10; i++){
        if(numeros[i] > 0){
            positivos += 1;
        }else{
            negativos += 1;
        }
    }
    std::cout<<"A quantidade de números positivos é: "<<positivos<<std::endl;
    std::cout<<"A quantidade de números negativos é: "<<negativos<<std::endl;



    return 0;
}