//CLASSES

#include <iostream>

using namespace std;

/*class calculadora{ //classe calculadora: tudo que estiver aqui dentro pertence a essa classe
    private: //funções privadas que podem ser usadas somente na classe

    public: //funções públicas que podem ser usadas também em outras partes do código
        int operacao(){
            int op;
            cout << "Qual operacao voce deseja realizar?\n0 - sair\n1 - soma\n2 - subtracao" << endl;
            cin >> op;
            return op;
        }

        void soma(){
            int a, b;
            cout << "Insira os valores a serem somados: " << endl;
            cin >> a;
            cin >> b;
            int r = a + b;
            cout << a << " + " << b << " = " << r << endl;
        }

        void subtracao(){
            int a, b;
            cout << "Insira os valores a serem subtraidos: " << endl;
            cin >> a;
            cin >> b;
            int r = a - b;
            cout << a << " - " << b << " = " << r << endl;
        }

}; //o ; é só quando fecha a chave da classe, as funções de dentro não têm*/

class carro{ //as funções dentro da classe são chamadas de métodos
    private: 
    int ano;
    float valor, km;

    public: //são muito usadas as funções get (obter alguma coisa) e set (mostrar alguma coisa)
    //contrutor: (usado pra não precisar ficar repetindo um monte de coisa para dar os valores de um objeto, deve ter o mesmo nome da classe)
    carro(int a = 0, float v = -1, float k = -1){ //se tiver dado um desses valores, eu já sei que a pessoa não colocou os valores
        ano = a;
        valor = v;
        km = k;
    } 
    //ano:
    void setAno(int ano){ //usa no cin
        this->ano = ano; //o this indica o ano da função, enquanto o outro ano foi o passado como parâmetro pelo usuário
    }
    int getAno(){ //usa no cout
        return ano;
    }
    //valor:
    void setValor(float valor){
        this->valor = valor;
    }
    float getValor(){
        return valor;
    }
    //km:
    void setKm(float km){
        this->km = km;
    }
    float getKm(){
        return km;
    }
};

int main(){

    /*calculadora SomaSub; //classe calculadora e objeto SomaSub

    int op = SomaSub.operacao();

    if(op == 0){
        exit;
    } else if(op == 1){
        SomaSub.soma();
    } else if (op == 2){
        SomaSub.subtracao();
    }*/

    carro palio(2016, 70899, 32); //esses são os atributos
    //palio.setAno(2016);
    //palio.setValor(70899);
    //palio.setKm(32);
    cout << "- PALIO -" << endl;
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Valor: R$ " << palio.getValor() << endl;
    cout << "Quilometragem: " << palio.getKm() << " km" << endl;
    cout << endl;

    carro hb20(2022, 89783, 1000); //pode usar o set pra mudar o valor depois
    //hb20.setAno(2022);
    //hb20.setValor(89783);
    //hb20.setKm(1000);
    cout << "- HB20 -" << endl;
    cout << "Ano: " << hb20.getAno() << endl;
    cout << "Valor: R$ " << hb20.getValor() << endl;
    cout << "Quilometragem: " << hb20.getKm() << " km" << endl;
    cout << endl;

    return 0;
}
