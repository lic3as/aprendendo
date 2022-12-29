//PONTEIROS

#include <iostream>
#include <cstddef> //pra usar o NULL

using namespace std;

int main(){

    int variavel1; //variavel e seu tipo
    int* ponteiro1; //ponteiro e o tipo de variavel para a qual ele aponta
    variavel1 = 3; //valor da variavel
    ponteiro1 = &variavel1; //enderço que o ponteiro guarda (variavel1)

    cout << "Valor da variavel atraves do seu nome = " << variavel1 << endl;
    cout << "Endereco armazenado no ponteiro = " << ponteiro1 << endl;
    cout << "Valor da variavel atraves do ponteiro = " << *ponteiro1 << endl; //pra aparecer o valor da variavel para qual o ponteiro aponta é só colocar o * antes do nome do ponteiro

    int variavel2;
    //variavel2 = variavel1; //msm coisa de colocar o valor do ponteiro
    variavel2 = *ponteiro1;
    cout << "Valor da variavel atraves do seu nome = " << variavel2 << endl;

    //variavel1 = 30; //msm cois que colocar o valor no ponteiro, os 2 vão mudar
    *ponteiro1 = 30;
    cout << "Valor da varisvel atraves do seu nome = " << variavel1 << endl;

    variavel2 = 50;
    //*ponteiro1 = variavel2; //quando eu botei isso mudou a variavel1 pq na vdd eu tava mudando o valor da variavel armazenada pelo ponteiro, ou seja, variavel1
    ponteiro1 = &variavel2; //esse ta correto
    cout << "Valor da variavel atraves do ponteiro = " << *ponteiro1 << endl;
    cout << "Valor da variavel atraves do seu nome = " << variavel1 << endl;

    int* ponteiro2;
    ponteiro2 = NULL; //é impotante colocar o NULL pq caso não coloque nenhum endereço e imprima, o ponteiro vai armazenar o valor que estava armazenado naquele espaço de meória, ou seja, algo nada a ver
    cout << "Endereco armazenado pelo ponteiro = " << ponteiro2 << endl; //se colocar pra imprimir o valor vai dar erro pq não ta armazenando nada

    int* ponteiro3 = new int; //variavel inteira sem nome, não da pra chamar ela por um nome, apenas pelo ponteiro
    *ponteiro3 = 35;
    cout << "Endereco armazenado pelo ponteiro = " << ponteiro3 << endl;
    cout << "Valor da variavel atraves do ponteiro = " << *ponteiro3 << endl;

    //*ponteiro3 = *ponteiro1; //o ponteiro3 recebe o valor do ponteiro1
    delete ponteiro3; //deleta o endereço do ponteiro3 pra não ocorrer vazamento de memoria na proxima linha
    ponteiro3 = ponteiro1; //o ponteiro3 recebe o endereço do ponteiro1 (os dois ficam apontando pro msm endereço) e perde o endereço de memoria antigo (vazamento de memotia)
    cout << "Valor da variavel atraves do ponteiro  = " << *ponteiro3 << endl;

    return 0;
}
