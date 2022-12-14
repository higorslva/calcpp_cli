#include <cmath>
#include <locale>
#include <cstdlib>
// for basics operations
#include "./basic/Adicao.h"
#include "./basic/Subtracao.h"
#include "./basic/Multiplicacao.h"
#include "./basic/Divisao.h"
// for aritmetics
#include "./aritmetics/aritmetics.h"
// for calculus
#include "./calculus/Derivada.h"
#include "./calculus/Integrais.h"

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    while (true){
        setlocale (LC_ALL, "Portuguese");
        int op;
        cout << "\tCaculadora v0.6 - alpha build\n" << endl;
        cout << "\tOperações possíveis:\n\n";
        cout << "\t[1] - Soma | [2] - Subtração | [3] - Multiplição\n";
        cout << "\t[4] - Divisão | [5] - Cálculos Aritméticos | [6] - Raízes de uma função do segundo grau\n";
        cout << "\t[7] - Derivada | [8] - Integrais\n";
        cout << "\t[0] - Sair\n\n";
        cout << "Insira o número da operação que deseja: ";
        cin >> op;
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
            aritmetics();
        }else if (op == 6){
            RaizesEquacao();
        }else if (op == 7){
            Derivada();
        }else if (op ==8){
            Integrais();
        }
        else if(op == 0){
          break;
        }
        int continuar;
        cout << "Deseja fazer outra operacao? \n[1] - Sim \n[2] - Não" << endl;
        cin >> continuar;
        if(continuar == 2){
            cout << ":)" << endl;
            break;
        }else if (continuar != 1){
            cout <<  "Comando Invalido. Saindo..." << endl;
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
