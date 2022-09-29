#include <iostream>
#include "Ponto.h"

using namespace std;

int main() {

    Ponto *p1 = new Ponto(3, 4);

    cout << p1->getX() << endl << p1->getY();

}