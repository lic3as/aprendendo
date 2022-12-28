//Dada a função f(x) = x² - 3x + 5. Crie um algoritmo em C++ que tenha uma função que
//calcula o valor de f(a), em que a é um número real informado pelo usuário.

#include <iostream>
#include <math.h>

using namespace std;

float funcao(float a){

    float resultado;
    resultado = ((pow(a, 2) - 3*a) + 5);
    return resultado;

}

int main(){

    float a;
    cout << "Insira um valor: " << endl;
    cin >> a;

    float resultado = funcao(a);
    cout << "f(a) = " << resultado << endl;

    return 0;
}
