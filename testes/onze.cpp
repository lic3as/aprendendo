//CLASSE ORGANIZADA

#include <iostream>

using namespace std;

class carro{ 
    private: 
    int ano;
    float valor, km;

    public: 
    //contrutor:
    carro(int a, float v, float k);
    //ano:
    void setAno(int ano);
    int getAno();
    //valor:
    void setValor(float valor);
    float getValor();
    //km:
    void setKm(float km);
    float getKm();
};

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

    //construtor:
    carro::carro(int a = 0, float v = -1, float k = -1){
        ano = a;
        valor = v;
        km = k;
    }
    //ano:
    void carro::setAno(int ano){ 
        this->ano = ano; 
    }
    int carro::getAno(){ 
        return ano;
    }
    //valor:
    void carro::setValor(float valor){
        this->valor = valor;
    }
    float carro::getValor(){
        return valor;
    }
    //km:
    void carro::setKm(float km){
        this->km = km;
    }
    float carro::getKm(){
        return km;
    }
