#include <iostream>
#include "CircularList.h"
using namespace std;

void print(const CircularList& lst) {
    for(int i = 0; i < lst.size(); ++i)
        cout << lst[i] << " ";
    cout << endl;
}

int main() {
    CircularList lst;

    for(int i = 1; i <= 9; ++i) 
        lst.push_back(i * 0.5);

    cout << lst.toString() << endl;

    while (!(lst.empyt()) {
        lst.pop_back();
        cout << lst.toString() << endl;
    })
}