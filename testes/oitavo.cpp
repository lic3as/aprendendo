//VETORES - ARRAYS UNIDIRECIONAIS

#include <iostream>

using namespace std;

int main(){

    //ALOCAÇÃO ESTÁTICA: (feita na própria compilação, já informei o tamanho do vetor e tudo)

    /* //int vet[4];
    //vet[0] = 5;
    //vet[1] = 10;

    int vet[4] = {5, 10}; //aqui os outros vão virar 0

    //cout << vet[0] << endl;

    cout << "[ ";
    for(int i = 0; i < 4; i++){
        cout << vet[i] << " ";
    } cout << "]" << endl;

    int x = sizeof(int); //tamanho do inteiro em bytes
    int y = sizeof(vet); //tamamho do vetor vet
    int qtdElem = sizeof(vet)/sizeof(int); //pra achar a qtd de elementos do vetor de int é só dividir o tamanho do vetor pelo tamanho de um int
    cout << "Tamanho de um inteiro = " << x << endl;
    cout << "Tamanho do vetor = " << y << endl;
    cout << "Quantidade de elementos do vetor = " <<qtdElem << endl; */

    //ALOCAÇÃO DINÂMICA: (feita no processamento)

    int tamanho;
    cout << "Insira o tamanho do vetor: " << endl;
    cin >> tamanho;
    int* vet = new int[tamanho]; //o vetor é como um ponteiro

    for(int i = 0; i < tamanho; i++){
        cout << "Insira o elemento " << i+1 << " do vetor: " << endl;
        cin >> vet[i];
    }

    cout << "[ ";
    for(int i = 0; i < tamanho; i++){
        cout << vet[i] << " ";
    } cout << "]" << endl;

    //delete [] vet; //caso queira deletar o espaço de memória do vetor depois


    return 0;
}