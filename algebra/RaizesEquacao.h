#include <iostream>
#include <math.h>
#include <stdlib.h>

void RaizesEquacao(){
    float a, b, c;
    std::cout << "Calcular raízes de equações 'ax²+bx+c=0'\n";
    std::cout << "(Caso o resultado mostre 'nan', as raízes não existem para essa função)" << std::endl;
    std::cout << "Insira o valor de a: ";
    std::cin >> a;
    std::cout << "Insira o valor de b: ";
    std::cin >> b;
    std::cout << "Insira o valor de c: ";
    std::cin >> c;
    std::cout << "Resultado: " << std::endl;
    std::cout << "Raíz x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << std::endl;
    std::cout << "Raíz x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << std::endl;
}
