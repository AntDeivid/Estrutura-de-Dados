#include <iostream> // std::cout, std::cin, std::fixed
#include <iomanip> // std::setprecision

using namespace std;

struct aluno {
    float nota[3];
    float media;
};

// Recebe um aluno passado por referência, e preenche o campo 'media' com a
// média das 3 notas do aluno.
void calcula_media(aluno *a) {

    float soma = 0;
    float med;

    for (int i = 0; i < 3; i++) {

        soma += a->nota[i];

    }

    med = soma / 3;

    a->media = med;
}

// Recebe vetor de alunos ('turma') e número de alunos ('n'), e chama a função
// 'calcula_media' (da questão anterior) para cada aluno do vetor.
// Ou seja, preenche o campo 'media' de cada aluno com a média das 3 notas do aluno.
void calcula_media_turma(aluno turma[], int n) {

    for (int i = 0; i < n; i++) {

        calcula_media(&turma[i]);

    }

}

int main()
{
    int n, i, j;
   
    cin >> n;
    aluno turma[n];
   
    for (j = 0; j < n; j++) {
        for (i = 0; i < 3; i++) {
            cin >> turma[j].nota[i];
        }    
    }
        
   // Chame a função 'calcula_media_turma' passando o vetor de alunos 'turma'.
   calcula_media_turma(turma, n)
   
    for (j = 0; j < n; j++) {
        cout << fixed;
        cout << setprecision(1) << turma[j].media << " ";
    }
   
    return 0;
}