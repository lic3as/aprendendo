//Crie um algoritmo em C++ que tenha uma função que calcula o fatorial de um número
//inteiro positivo, informado pelo usuário.

#include <iostream>

using namespace std;

int fatorial(int num){

    int r = num;
    for(int i = 1; i < num; i++) r *= i;
    return r;

}

int main(){

    int n;
    cout << "Insira um número inteiro positivo: " << endl;
    cin >> n;

    int resultado = fatorial(n);
    cout << "O fatorial de " << n << " eh " << resultado << endl;

    return 0;
}
