//ESTRUTURAS DE REPETICAO

#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Digite um numero positivo: " << endl;
    cin >> n;

    int soma, contador;
    while(contador <= n){
        soma += contador;
        contador++;
    }
    cout << "A soma dos numeros de 1 ate " << n << " eh " << soma << endl;

    //PARA QUEBRAR UMA REPETIÇÃO É SÓ COLOCAR UM break;

    /* do{ //faz uma repetição primeiro, mesmo que a condição seja falsa
        soma += contador;
        contador++;
    } while(contador <= n); */

    /* for(int i = 1; i <= n; i++){
        soma += contador;
        contador++;
    } */

    return 0;
}
