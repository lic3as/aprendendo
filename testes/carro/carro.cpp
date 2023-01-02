#include <iostream>
#include "carro.h"

using namespace std;

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
