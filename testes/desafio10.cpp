//Crie um algoritmo em C++ que tenha uma função que recebe dois ponteiros
//e troca o valor de referência entre os dois.

#include <iostream>

using namespace std;

void trocaValorPonteiro(int* p1, int* p2){
    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main(){

    int* ponteiro1 = new int;
    cout << "Informe o valor de referencia do primeiro ponteiro: " << endl;
    cin >> *ponteiro1;
    int* ponteiro2 = new int;
    cout << "Informe o valor de referencia do segundo ponteiro: " << endl;
    cin >> *ponteiro2;

    trocaValorPonteiro(ponteiro1, ponteiro2);

    cout << "Valor de referencia do primeiro ponteiro = " << *ponteiro1 << endl;
    cout << "Valor de referencia do segundo ponteiro = " << *ponteiro2 << endl;


    return 0;
}
