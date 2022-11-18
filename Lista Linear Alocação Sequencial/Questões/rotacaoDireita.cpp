#include <iostream>
#include <vector>
using namespace std;

void right_rotation(vector<int>& vet, int nrot){

        vector<int> aux(vet.size());

        for (int i = 0; i < nrot; i++) {
            aux[0] = vet[vet.size() - 1];
            for (int j = 1; j < vet.size(); j++) {
                aux[j] = vet[j - 1];
            }
            vet = aux;
        }


}

void show(vector<int> &vet) {
    cout << "[ ";
    for(int value : vet)
        cout << value << " ";
    cout << "]\n";
}

int main(){
    int size, nrot;
    cin >> size >> nrot;
    vector<int> vet(size);
    for(int i = 0; i < size; i++)
        cin >> vet[i];
    
    right_rotation(vet, nrot);
    show(vet);
}