#include <iostream>
#include <string>

using namespace std;

bool vogal(char letra) {

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {

        return true;

    }

    return false;

}

int main() {

    int cont;
    string frase;
    getline(cin, frase);

    for (int i = 0; i < (int)frase.size(); i++) {

        cont = 0;

        cout << frase[i];

        for (int j = i + 1; j < (int)frase.size(); j++) {

            if (frase[j] == frase[i] && vogal(frase[j]) || frase[j] == ' ') {

                cont++;

            }

            else {

                break;

            }

        }

        if (cont >= 2) {

            i += cont;

        }

    }

    return 0;

}