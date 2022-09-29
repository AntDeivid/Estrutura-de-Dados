#include <iostream>
#include <string>

using namespace std;

struct Aluno {

    string nome;
    int matricula;
    string disciplina;
    double nota;

};

Aluno registroAluno() {

    Aluno aluno1;

    cin >> aluno1.nome;
    cin >> aluno1.matricula;
    cin.ignore() ;
    cin >> aluno1.disciplina;
    cin >> aluno1.nota;

    return aluno1;

}

void media(Aluno x) {

    if (x.nota >= 7) {

        cout << x.nome << " " << "aprovado(a) em" << " " << x.disciplina;

    }

    else {

        cout << x.nome << " " << "reprovado(a) em" << " " << x.disciplina;

    }

}

int main() {

    Aluno x = registroAluno();

    media(x);

    return 0;

}