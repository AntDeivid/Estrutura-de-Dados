// Arquivo de Implementacao do TAD Matriz
#include <iostream>
#include <iomanip>
#include "Matriz.h"
using namespace std;

// Aloca espaco dinamicamente para matriz com m linhas e n colunas
Matriz::Matriz(int m, int n) {

	this->lin = m;
	this->col = n;
	this->mat = new int*[m];

	for (int i = 0; i < m; i++) {
		this->mat[i] = new int[n];
	}

}   

// Destrutor: Libera a memoria que foi alocada dinamicamente no construtor
Matriz::~Matriz() {

		for (int i = 0; i < this->lin; i++) {
			delete[] this->mat[i];
		}

		delete[] this->mat;
		cout << "matriz liberada" << endl;

}   

// Retorna o numero de linhas da matriz
int Matriz::linhas() { return this->lin; } 

// Retorna o numero de colunas da matriz
int Matriz::colunas() { return this->col; }

// Retorna o valor da celula [i][j] da matriz
int Matriz::getValor(int i, int j) { return this->mat[i][j]; } 

// Atribui valor a celula [i][j] da matriz
void Matriz::setValor(int valor, int i, int j) { this->mat[i][j] = valor; }

// Imprimir a matriz 
void Matriz::print() {
    for(int i = 0; i < lin; ++i) {
		for(int j = 0; j < col; ++j) {
			cout << setw(7) << mat[i][j];
		}
		cout << "\n";
	}
} 

// Soma matrizes
Matriz *Matriz::soma(Matriz& B) {

	if (!(this->lin == B.lin) || !(this->col == B.col)) {

		cout << "As matrizes não podem ser somadas, posto que não possuem o mesmo tamanho." << endl;
		return nullptr;

	}

	Matriz *novaMatriz = new Matriz(B.lin, B.col);

	for (int i = 0; i < B.lin; i++) {
		for (int j = 0; j < B.col; j++) {
			novaMatriz->mat[i][j] = this->mat[i][j] + B.mat[i][j];
		}
	}

	return novaMatriz;


}

// Multiplica matrizes
Matriz *Matriz::multiplica(Matriz& B) {

	if (!(this->col == B.lin)) {

		cout << "As matrizes não podem ser multiplicadas, posto que não possuem o mesmo tamanho." << endl;
		return nullptr;

	}

    Matriz *novaMatriz = new Matriz(this->lin, B.col);

	for (int i = 0; i < this->lin; i++) {
		for (int j = 0; j < B.col; j++) {
			for (int k = 0; k < this->col; k++) {
			   novaMatriz->mat[i][j] += this->mat[i][k] * B.mat[k][j];
			}
			
		}
		
	}

	return novaMatriz;

}