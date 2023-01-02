#include <iostream>
#include "carro.cpp"

using namespace std;

int main(){
    
    carro palio(2016, 70899, 32); 
    cout << "- PALIO -" << endl;
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Valor: R$ " << palio.getValor() << endl;
    cout << "Quilometragem: " << palio.getKm() << " km" << endl;
    cout << endl;

    carro hb20(2022, 89783, 1000); 
    cout << "- HB20 -" << endl;
    cout << "Ano: " << hb20.getAno() << endl;
    cout << "Valor: R$ " << hb20.getValor() << endl;
    cout << "Quilometragem: " << hb20.getKm() << " km" << endl;
    cout << endl;


    return 0;
}