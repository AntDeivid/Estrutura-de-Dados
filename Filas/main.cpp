#include <iostream>
#include <sstream>
#include "Queue.h"
using namespace std;

template<typename T>
void combina_filas(Queue<T>& f_res, Queue<T>& f1, Queue<T>& f2) {
    while (!f1.empty() && !f2.empty()) {
        f_res.push(f1.front());
        f_res.push(f2.front());
        f1.pop();
        f2.pop();
    }

    while (!f1.empty()) {
        f_res.push(f1.front());
        f1.pop();
    }

    while (!f2.empty()) {
        f_res.push(f2.front());
        f2.pop();
    }
}

int main() {
    Queue<int> fila; // cria fila vazia

    for(int i = 1; i <= 9; i++)
        fila.push(i);  // enfileira

    while(!fila.empty()) {
        cout << fila.front() << endl;
        fila.pop();
    }

}