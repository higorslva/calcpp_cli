#include <iostream>
#include <math.h>
#include <stdlib.h>

void RaizQuadrada(){
    float a;
    std::cout << "Insira o valor para achar a raiz quadrada: ";
    std::cin >> a;
    std::cout << "\nA raiz quadrada de " << a << " = " << sqrt(a) << "\n" << std::endl;
}
