//TIPOS DE VARIAVEIS, ENTRADA E SAIDA

#include <iostream>

using namespace std;

int main(){

    int inteiro = 7;
    cout << inteiro << endl;

    float real = 3.9;
    cout << real << endl;

    double realmaior = 3.2e99; //2 elevado a 99
    cout << realmaior << endl;

    bool booleano = true;
    cout << booleano << endl;

    char letra = 'a';
    cout << letra << endl;

    string palavra = "linda";
    cout << palavra << endl;

    int idade;
    cout << "Quantos anos você tem?" << endl;
    cin >> idade;
    cout << "Idade: " << idade << endl;

    return 0;
}