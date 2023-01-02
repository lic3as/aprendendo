#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

cidade::cidade(int populacao = 0, int ano = 0, float area = -1, float idh = -1){
    this->populacao = populacao;
    this->ano = ano;
    this->area = area;
    this->idh = idh;
}

void cidade::setPopulacao(int populacao){
    this->populacao = populacao;
}

int cidade::getPopulacao(){
    return populacao;
}

void cidade::setAno(int ano){
    this->ano = ano;
}

int cidade::getAno(){
    return ano;
}

void cidade::setArea(float area){
    this->area = area;
}

float cidade::getArea(){
    return area;
}

void cidade::setIDH(float idh){
    this->idh = idh;
}

float cidade::getIDH(){
    return idh;
}
