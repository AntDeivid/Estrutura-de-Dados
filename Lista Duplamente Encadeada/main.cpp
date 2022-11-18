#include <iostream>
#include "List.h"

using namespace std;

int main() {

    List<float> lista;

    for (int i = 1; i <= 9; i++) {
        lista.push_back(i);
    }

    for (int i = 1; i <= 9; i++) {
        cout << lista[i] << endl;
    }
    cout << endl;

}