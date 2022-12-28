//Em um programa de Moradia Popular, somente pessoas maiores de 21 anos 
//e com renda abaixo de R$1.200,00 podem participar. Crie um algoritmo em C++
//em que o usuário informa sua idade e renda e é informado se ele pode ou não 
//participar desse programa.

#include <iostream>

using namespace std;

int main(){

    int idade;
    cout << "Insira a sua idade: " << endl;
    cin >> idade;
    float renda;
    cout << "Insira a sua renda: " << endl;
    cin >>renda;

    if(idade >= 21 && renda < 1200){
        cout << "Voce pode participar do programa Moradia Popular :)" << endl;
    } else{
        cout << "Voce nao pode participar do programa Moradia Popular :(" << endl;
    }

    return 0;
}
