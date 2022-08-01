/*
Not implemented in the main yet.
*/

#include <iostream>
#include <math.h>

using namespace std;

double integral(double(*f)(double x), double a, double b, int n) {
    double step = (b - a) / n;  // largura de cada pequeno retângulo
    double area = 0.0;  // area
    for (int i = 0; i < n; i ++) {
        area += f(a + (i + 0.5) * step) * step; // soma cada pequeno retângulo
    }
    return area;
}
int main(){
  cout.precision(7);
  cout << integral(sin, 1, M_PI, 2); //infelizmente lê apenas caso esteja dentro do código. Ainda não recebe input do usuário
  return 0;
}
