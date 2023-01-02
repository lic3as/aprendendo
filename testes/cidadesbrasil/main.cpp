//Crie um algoritmo em C++ que tenha uma classe chamada cidadesbrasil,
//nessa classe, escolha os atributos de cada objeto (população,
//ano de fundação, área total e idh).

#include <iostream>
#include "cidadesbrasil.cpp"

using namespace std;

int main(){

    cidade pereiro(15000, 1842, 450.81, 0.600);
    cout << "- PEREIRO -" << endl;
    cout << "Populacao: " << pereiro.getPopulacao() << " habitantes" << endl;
    cout << "Ano de fundacao: " << pereiro.getAno() << endl;
    cout << "Area total: " << pereiro.getArea() << " km^2" << endl;
    cout << "IDH: " << pereiro.getIDH() << endl;
    cout << endl;

    cidade saoPaulo(12396372, 1554, 1521.41, 0.805);
    cout << "- SÃO PAULO -" << endl;
    cout << "Populacao: " << saoPaulo.getPopulacao() << " habitantes" << endl;
    cout << "Ano de fundacao: " << saoPaulo.getAno() << endl;
    cout << "Area total: " << saoPaulo.getArea() << " km^2" << endl;
    cout << "IDH: " << saoPaulo.getIDH() << endl;
    cout << endl;

    cidade fortaleza(2703391, 1726, 312.36, 0.754);
    cout << "- FORTALEZA -" << endl;
    cout << "Populacao: " << fortaleza.getPopulacao() << " habitantes" << endl;
    cout << "Ano de fundacao: " << fortaleza.getAno() << endl;
    cout << "Area total: " << fortaleza.getArea() << " km^2" << endl;
    cout << "IDH: " << fortaleza.getIDH() << endl;
    cout << endl;

    return 0;
}