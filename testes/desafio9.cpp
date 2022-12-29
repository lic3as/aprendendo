//Crie um algoritmo em C++ utilizando apenas ponteiros, em que o usuário
//informa a idade de duas pessoas e o algoritmo informa a média destas duas 
//idades.

#include <iostream>

using namespace std;

int main(){

    int* idade1 = new int;
    cout << "Informe a idade da primeira pessoa: " << endl;
    cin >> *idade1;
    int* idade2 =new int;
    cout << "Informe a idade da segunda pessoa: " << endl;
    cin >> *idade2;

    *idade1 += *idade2; //fiz tudo em um só ponteiro pra gastar menos memória
    delete idade2; //não precisa mais desse ponteiro
    *idade1 /= 2;
    cout << "A media entre as idades eh " << *idade1 << endl;

    return 0;
}