#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main() {

    string texto, aux1;
    getline(cin, texto);

    stringstream ss;

    ss << texto;

    ss >> aux1;

    cout << aux1;

    ss >> aux1;

    cout << aux1;

    return 0;

}