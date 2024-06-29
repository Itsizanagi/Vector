#include <iostream>
#include <vector>


int main() {

    std::vector<int> num1;
    std::vector<int> num2;
    int tam;
    int tam2;
    int i;

   num1.push_back(1); // 0
   num1.push_back(2); // 1
   num1.push_back(3); // 2
   // alteracao => num1[1] = 70;

   num2.push_back(4);
   num2.push_back(5);
   num2.push_back(6);

 // num1.insert(num1.begin(), 0);
 // num1.insert(num1.end(), 0);
    // num1.erase(num1.end()-1); remover elementos


   tam = num1.size();
   tam2 = num2.size();

    // num1.swap(num2); // troca de valores
    std::cout << "Primeiro elemento de num1: " << num1.front() << std::endl;
    std::cout << "Ultimo elemento de num1: " << num1.back() << std::endl;
    std::cout << "Elemento do meio de num1: " << num1.at(tam/2) << std::endl;
    std::cout << std::endl;
    std::cout << "Primeiro elemento de num2: " << num2.front() << std::endl;
    std::cout << "Ultimo elemento de num2: " << num2.back() << std::endl;
    std::cout << "Elemento do meio de num2: " << num2.at(tam/2) << std::endl;

    tam = num1.size();
    tam2 = num2.size();
    std::cout << std::endl;

    std::cout << "Tamanho vector1: "<< tam << std::endl;
    std::cout << "Tamanho vector2: "<< tam2 << std::endl;


    for(i=0;i<tam;i++){
        std::cout << " "<< num1[i];
    }

    std::cout << std::endl;

    for(i=0;i<tam;i++){
        std::cout << " "<< num2[i];
    }

    while(!num1.empty()){
        num1.pop_back();
    }

    std::cout << "\n Novo tamanho de num1: "<< num1.size();

    while(!num2.empty()){
        num2.pop_back();
    }
    
    std::cout << "\n Novo tamanho de num2: "<< num2.size();
    return 0;
}
