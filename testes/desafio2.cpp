//Crie um algoritmo em C++ em que o usuário informa as notas de três provas
//de um determinado aluno e também a média da nota da turma toda. O algoritmo
//deve calcular a média deste aluno e informar se sua nota é acima da média, 
//abaixo da média ou está na média.

#include <iostream>

using namespace std;

float media(float n1, float n2, float n3){
    float resultado;
    resultado = (n1 + n2 + n3)/3;
    return resultado;
}

int main(){

    float nota1, nota2, nota3;
    cout << "Insira a nota da primeira prova: " << endl;
    cin >> nota1;
    cout << "Insira a nota da segunda prova: " << endl;
    cin >> nota2;
    cout << "Insira a nota da terceira prova: " << endl;
    cin >> nota3;

    float mediaAluno = media(nota1, nota2, nota3);
    cout << "Media do aluno = " << mediaAluno << endl;

    float mediaTurma;
    cout << "Insira a media da nota da turma: " << endl;
    cin >> mediaTurma;

    if(mediaAluno == mediaTurma){
        cout << "O aluno esta na media da turma." << endl;
    } else if(mediaAluno < mediaTurma){
        cout << "O aluno esta abaixo da media da turma." << endl;
    } else cout << "O aluno esta acima da media da turma." << endl;

    return 0;
}
