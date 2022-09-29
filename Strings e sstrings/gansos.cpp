#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main() {

    string text, aux1, maior (" ");
    getline(cin, text);
    stringstream ss;
    int cont = 0;

    ss << text;

    while (ss >> aux1) {

        //cout << aux1 << aux2;

        if (aux1 > maior) {

            maior = aux1;
            continue;

        }

        else {

            cout << "nao";
            return 0;

        }

    }

    cout << "sim";

    return 0;

}