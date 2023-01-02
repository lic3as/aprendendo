class cidade{
    private:
    int populacao, ano;
    float area, idh;

    public:
    cidade(int populacao, int ano, float area, float idh);
    void setPopulacao(int populacao);
    int getPopulacao();
    void setAno(int ano);
    int getAno();
    void setArea(float area);
    float getArea();
    void setIDH(float idh);
    float getIDH();
};
