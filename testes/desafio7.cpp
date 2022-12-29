//Crie um algoritmo em C++ em que o usuário informa  a dimensão de uma matriz,
//e os elementos de duas matrizes (ambas com mesma dimensão) e o algoritmo
//mosta a soma entre estas duas matrizes.

#include <iostream>

using namespace std;

int main(){

    int linhas;
    cout << "Informe a quantidade de linhas das matrizes: " << endl;
    cin >> linhas;
    int colunas;
    cout << "Informe a quantidade de colunas das matrizes: " << endl;
    cin >> colunas;
    
    int matriz1[linhas][colunas];
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Informe o elemento da matriz 1: " << endl;
            cin >> matriz1[i][j];
        }
    }
    cout << endl;
    int matriz2[linhas][colunas];
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Informe o elemento da matriz 2: " << endl;
            cin >> matriz2[i][j];
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz1[i][j] += matriz2[i][j];
        }
    }

    cout << endl << "Matriz resultante : " << endl;
    for(int i = 0; i < linhas; i++){
        cout << "[ ";
        for(int j = 0; j < colunas; j++){
            cout << matriz1[i][j] << " ";
        } cout << "]" << endl;
    }



    return 0;
}
