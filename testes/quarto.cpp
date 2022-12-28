//FUNÇÕES

#include <iostream>

using namespace std;

#define pi 3.14; //definir constante (valor que não pode ser modificado em nenhuma outra parte do código)

#define tchau cout << "\nO programa foi encerrado com sucesso!\n"; //definir alguma ação que você vai fazer muitas vezes, se digitar o nome da constante, a ação será executada

void meApresente(){ //void é pq não tem saída e como não tem nada nos parênteses, não tem entrada (parâmetros)
   
    cout << "Oi, eu sou Alice Aquino!" << endl;

}

int some(int x, int y){ //saída inteira e entradas inteiras x e y

    int resultado = x + y;
    return resultado; //retorna a soma

}

int main(){

    meApresente();

    int a, b;
    cout << "Insira o primeiro valor: " << endl;
    cin >> a;
    cout << "Insira o segundo valor: " << endl;
    cin >> b;
    int soma = some(a, b);
    cout << "O resultado da soma eh " << soma << endl;

    cout << "O valor de pi eh " << pi;

    tchau;

    return 0;
}
