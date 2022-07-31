#include <iostream>
#include <math.h>
#include <locale>
#include <stdlib.h>

#include "./basic/Adicao.h"
#include "./basic/Subtracao.h"
#include "./basic/Multiplicacao.h"
#include "./basic/Divisao.h"

#include "./algebra/RaizesEquacao.h"
#include "./algebra/RaizQuadrada.h"
#include "./algebra/RaizBaseX.h"
#include "./algebra/Potencia.h"

#include "./calculus/Derivada.h"


int main ()
{
    while (true){
        setlocale (LC_ALL, "Portuguese");
        int op;
        float a, b, c;
        std::cout << "Calculadora v0.5\n" << std::endl;
        std::cout << "Operações possíveis:\n\n";
        std::cout << "[1] - Soma | [2] - Subtração | [3] - Multiplição\n";
        std::cout << "[4] - Divisão | [5] - Raiz quadrada | [6] - Raiz com base x\n";
        std::cout << "[7] - Potência | [8] - Raízes de uma função do segundo grau | [9] - Derivada\n";
        std::cout << "[10] - Sair\n\n";
        std::cout << "Insira o número da operação que deseja: ";
        std::cin >> op;
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
        if (op == 1){
            Adicao();
        }else if (op == 2){
            Subtracao();
        }else if (op == 3){
            Multiplicacao();
        }else if (op == 4){
            Divisao();
        }else if (op == 5){
            RaizQuadrada();
        }else if (op == 6){
            RaizBaseX();
        }else if (op == 7){
            Potencia();
        }else if(op == 8){
            RaizesEquacao();
        }else if (op == 9){
            Derivada();
        }else if(op == 10){
          return 0;
        }
        int continuar;
        std::cout << "Deseja fazer outra operacao? \n [1] - Sim \n [2] - Não" << std::endl;
        std::cin >> continuar;
        if(continuar == 2){
            break;
        }else if (continuar != 1){
            std::cout <<  "Comando Invalido. Saindo..." << std::endl;
            break;
        }
        #ifdef _WIN32
          system("cls");
        #else
          system("clear");
        #endif
    }
    return 0;
}
