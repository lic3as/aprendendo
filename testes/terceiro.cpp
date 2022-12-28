//OPERADORES MATEMÁTICOS

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a;
    cout << "Insira um valor: " << endl;
    cin >> a;

    int b;
    cout << "Insira outro valor " << endl;
    cin >> b;

    int soma = a + b;
    cout << "Soma = " << soma << endl;
    int sub = a - b;
    cout << "Subtração = " << sub << endl;
    int mult = a * b;
    cout << "Multiplicação = " << mult << endl;
    int quociente = a / b;
    cout << "Quociente da divisão inteira = " << quociente << endl;
    int resto = a % b;
    cout << "Resto da divisão inteira = " << resto << endl;
    float div = (float)a / (float)b;
    cout << "Divisão real = " << div << endl;
    float pot = pow(a, b);
    cout << "Potência = " << pot << endl;

    return 0;
}
