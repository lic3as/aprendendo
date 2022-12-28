//Crie um algoritmo em C++ que cálcula a potência B^E, em que o 
//usuário informa um número real B (base) e um número natural E
//(expoente). Nesse algoritmo, sempre que é informado o resultado 
//da potência, é perguntado ao usuário se este deseja calcular 
//outra potência. Obs.: Não pode usar a biblioteca math.h

#include <iostream>

using namespace std;

int main(){

    bool repete;

    do{
        float b;
        cout << "Insira o valor da base: " << endl;
        cin >> b;
        int e;
        cout << "Insira o valor do expoente: " << endl;
        cin >> e;

        float potencia = b;
        for(int i = 1; i < e; i++){
            potencia *= b;
        }

        cout << "Potencia = " << potencia << endl;

        cout << "\nDeseja calcular mais uma potencia?\nDigite 1 para sim\nDigite 0 para nao" << endl;
        cin >> repete;
    } while(repete);

    return 0;
}
