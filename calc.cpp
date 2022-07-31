#include <iostream>
#include <math.h>
#include <locale>
#include <stdlib.h>
#include "RaizesEquacao.h"
#include "RaizQuadrada.h"
#include "RaizBaseX.h"

//using namespace std;

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
        std::cout << "[7] - Potência | [8] - Raízes de uma função do segundo grau | [9] - Derivada\n\n";
        std::cout << "Insira o número da operação que deseja: ";
        std::cin >> op;
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
        if(op == 8){
            RaizesEquacao();
        }else if (op == 5){
            RaizQuadrada();
        }else if (op == 6){
            RaizBaseX();
        }else if (op <= 4){
            std::cout << "Insira o primeiro valor: ";
            std::cin >> a;
            std::cout << "Insira o segundo valor: ";
            std::cin >> b;
        }else if (op == 7){
            std::cout << "Insira a base: ";
            std::cin >> a;
            std::cout << "Insira a potência: ";
            std::cin >> b;
        }else if (op == 9){
            int der;
            std::cout << "Insira a regra da derivação\n";
            std::cout << "[1] - Derivada de uma constante \n[2] - Derivada de uma potência (a^x)\n[3] - Derivada da função exponencial" << std::endl;
            std::cin >> der;

            switch (der){
                case 1:
                    std::cout << "Não há nada para fazer. A derivada de uma constante é sempre zero." << std::endl;
                    std::cout << "d/dx C = 0" << std::endl;
                    break;

                case 2:
                    int c;
                    std::cout << "Insira a base: ";
                    std::cin >> a;
                    std::cout << "Insira a potência: ";
                    std::cin >> b;
                    c = b - 1;
                    std::cout << "Derivar " << a << "^" << b << std::endl;
                    std::cout << "Primeiro, passamos a potência '" << b <<"' multiplicando, ficando: " << b << " * " << a << std::endl;
                    std::cout << "Agora, subtraimos -1 da potência. Como " << b << " - 1  é igual a " << c << ", então nos resta " << b << "*" << a << "^" << c << std::endl;
                    std::cout << "A derivada de " << a << "^" << b << " é: " << b << "*" << a << "^" << c << std::endl;
                    std::cout << "Em outras palavras, " << b * pow(a,c) << std::endl;
                    break;

                case 3:
                    std::cout << "Insira a base: ";
                    std::cin >> a;
                    std::cout << "A derivada da função exponencial é a^x * ln(a)" << std::endl;
                    std::cout << "Logo, temos " << a << "^x * ln(" << a << ")" << std::endl;
                    break;

                default:
                    std::cout << "Inválido" << std::endl;
                    break;
            }
        }


        switch (op){
            case 1:
                std::cout << a << " + " << b << " = " << a + b << std::endl;
                break;
            case 2:
                std::cout << a << " - " << b << " = " << a - b << std::endl;
                break;
            case 3:
                std::cout << a << " * " << b << " = " << a * b << std::endl;
                break;
            case 4:
                std::cout << a << " / " << b << " = " << a / b << std::endl;
                break;
            case 6:
                break;
            case 7:
                std::cout << a << "^" << b <<" = " << pow(a, b) << std::endl;
                break;
            case 8:
                 std::cout << "Raíz x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << std::endl;
                 std::cout << "Raíz x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << std::endl;
                 break;
            case 9:
                break;
            default:
                std::cout << "Comando inválido." << std::endl;
                break;
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
