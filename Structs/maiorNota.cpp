#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Aluno {

    string nome;
    int matricula;
    string disciplina;
    double nota;

};

Aluno registroAluno() {

    Aluno x;
    cin >> x.nome;
    cin >> x.matricula;
    cin.ignore();
    cin >> x.disciplina;
    cin >> x.nota;
    cin.ignore();

    return x;

}

void maiorNota(Aluno x, Aluno y) {

    if (x.nota > y.nota) {

        cout << x.nome << ", " << showpoint << fixed << setprecision(1) << x.nota;

    }

    else if (y.nota > x.nota) {

        cout << y.nome << ", " << showpoint << fixed << setprecision(1) << y.nota;

    }

    else {

        cout << x.nome << " e " << y.nome << ", " << showpoint << fixed << setprecision(1) << x.nota;

    }

}

int main() {

    Aluno aluno1, aluno2;

    aluno1 = registroAluno();
    aluno2 = registroAluno();

    maiorNota(aluno1, aluno2);

}