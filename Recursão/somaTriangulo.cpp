#include<iostream>
#include<cmath>

using namespace std;
   
void somaTriangulo(int vet[] , int n) {

    if (n < 1)
        return;

    int aux[n - 1];

    for (int i = 0; i < n - 1; i++) {

        int x = vet[i] + vet[i + 1];
        aux[i] = x;

    }

    somaTriangulo(aux, n - 1);

    for (int i = 0; i < n ; i++) {

        if(i == n - 1)
            cout << vet[i] << " ";

        else
            cout << vet[i] << ", ";

    }
                
    cout << endl;

}
   
int main() {

    int tamanho = 0;
    cin >> tamanho;

    int vet[tamanho];
    for (int i = 0; i < tamanho; i++) {

        cin >> vet[i];

    }

    int n = sizeof(vet) / sizeof(vet[0]);
        
    somaTriangulo(vet, n);
}