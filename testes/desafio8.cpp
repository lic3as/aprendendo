//Crie um algoritmo em C++ que o usuário informa o tamanho de um
//vetor, e seus elementos. O algoritmo deve imprimir este vetor e
//logo após, perguntar ao usuário se ele quer imprimir outro vetor.
//Utilize o delete após a impressão do vetor.

#include <iostream>

using namespace std;

int main(){

    bool repete;
    do{
        int tamanho;
        cout << "Informe o tamanho do vetor: " << endl;
        cin >> tamanho;

        int* vetor = new int[tamanho];
        for(int i = 0; i < tamanho; i++){
            cout << "Informe o elemento " << i+1 << " do vetor: " << endl;
            cin >> vetor[i]; 
        }

        cout << "[ ";
        for(int i = 0; i < tamanho; i++){
            cout << vetor[i] << " ";
        } cout << "]" << endl;

        cout << "Deseja imprimir outro vetor?\n1 para sim\n0 para nao" << endl;
        cin >> repete;
        if(repete){
            delete [] vetor;
        }
    } while(repete);

    return 0;
}