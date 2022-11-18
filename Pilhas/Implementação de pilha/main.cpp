#include <iostream>
#include "Stack.h"
using namespace std;

string reverse(string line) {
    //olhar as fotos do dia 11/11 e implementar essa função
}

int main() {
    Stack<int> *pilha = new Stack<int>();

    for (int i = 55; i <= 62; i++) {
        pilha->push(i);
    }

    while (!pilha->empyt()) {
        cout << pilha->top() << endl;
        pilha->pop();
    }

    delete pilha;
}