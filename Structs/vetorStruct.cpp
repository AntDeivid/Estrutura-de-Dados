#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Aluno {

    int matricula;
    string nomeCompleto;
    float media;

};

Aluno registroAluno() {

    Aluno aluno1;

    cin >> aluno1.matricula;
    cin.ignore();
    getline(cin, aluno1.nomeCompleto);
    cin >> aluno1.media;

    return aluno1;

}

int main() {

    int qAlunos, matriculaAlvo;
    cin >> qAlunos;

    Aluno alunoX[qAlunos];

    for (int i = 0; i < qAlunos; i++) {

        alunoX[i] = registroAluno();

    }

    cin >> matriculaAlvo;

    for (int i = 0; i < qAlunos; i++) {

        if (alunoX[i].matricula == matriculaAlvo) {

            cout << alunoX[i].nomeCompleto << endl << showpoint << fixed << setprecision(1) << alunoX[i].media;
            return 0;

        }

    }
    
    cout << "NAO ENCONTRADA";
    
    return 0;

}