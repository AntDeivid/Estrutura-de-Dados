#include <iostream>
#include "ForwardList.h"

using namespace std;

int main() {

    ForwardList lst;

    for (int i = 0; i <= 9; i++){
        lst.push_front(i);
    }

    cout << lst.toString() << endl;

}