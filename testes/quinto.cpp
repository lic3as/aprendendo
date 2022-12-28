//IF E ELSE, OPERADORES LOGICOS

#include <iostream>

using namespace std;

int main(){

    float nota1;
    cout << "Insira a primeira nota: " << endl;
    cin >> nota1;
    float nota2;
    cout << "Insira a segunda nota: " << endl;
    cin >> nota2;

    float media = (nota1 + nota2)/2;
    cout << "Media = " << media << endl;

    if(media >= 7) cout << "Aprovado :)" << endl;
    else if (media <= 7 && media >= 4) cout << "Precisa fazer a AF :/" << endl;
    else cout << "Reprovado :(" << endl;

    //COMPARADORES: == (IGUAL), != (DIFERENTE), > (MAIOR), < (MENOR), >= (MAIOR OU IGUAL), <= (MENOR OU IGUAL)
    //OPERADORES LOGICOS: && (E), || (OU), ! (NÃO) 

    //Operador ternário: (if e else na msm linha)
    //(media >= 7) ? cout << "Aprovado :)" : cout << "Reprovado :("; 

    return 0;
}
