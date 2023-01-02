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
