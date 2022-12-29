//Crie um algoritmo em C++ em que o usuário informa os gastos
//com alimentação de 5 famílias, calcula a média de gastos e diz 
//de cada família, se seu gasto é abaixo da média, acima da média
//ou na média.

#include <iostream>

using namespace std;

int main(){

    float gastos[5];
    for(int i = 0; i < 5; i++){
        cout << "Insira os  gastos da familia " << i+1 << ": " << endl;
        cin >> gastos[i];
    }

    float media = 0;
    for(int i = 0; i < 5; i++){
        media += gastos[i];
    }
    media /= 5;
    cout << "Media das familias = " << media << endl;

    for(int i = 0; i < 5; i++){
        if(gastos[i] == media){
            cout << "Os gastos da familia " << i+1 << " estao na media." << endl;
        } else if(gastos[i] < media){
            cout << "Os gastos da familia " << i+1 << " estao abaixo da media." << endl;
        } else{
            cout << "Os gastos da familia " << i+1 << " estao acima da media." << endl;
        }
    }   

    return 0;
}
