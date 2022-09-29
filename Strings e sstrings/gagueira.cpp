#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool vogal(char letra) {

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {

        return true;

    }

    return false;

}

int qSilabas(string str) {

    int countSilaba = 0;

    for (int i = 0; i < (int)str.size(); i++) {

        if (vogal(str[i]) && !(vogal(str[i + 1]))) {

            countSilaba++;

        }

        else if (!(vogal(str[(int)str.size() - 1]))) {

            countSilaba++;

        }

    }

    return countSilaba;

}

int main() {

    int i, j, count, control, repetidor, verificador, espaco;
    string frase, aux;
    stringstream ss;

    getline(cin, frase);
    ss << frase;

    espaco = 0;

    while (ss >> aux) {

        control = 0;
        repetidor = 1;
        verificador = 0;

        if (espaco) {

            cout << " ";

        }

        if (qSilabas(aux) > 1) {

            for (i = 0; i < (int)aux.size(); i++) {

                if (repetidor && vogal(aux[i]) && !(vogal(aux[i + 1])) && aux[i + 1] != '\0') {

                    count = 0;

                    while (count <= 2) {

                        for (j = 0; j <= i; j++) {

                            cout << aux[j];

                        }

                        count++;

                    }

                    repetidor = 0;
                    i++;
                    verificador = 1;

                }

                if (verificador) {
                    cout << aux[i];
                }

            }

        }

        else {

            cout << aux;

        }

        espaco = 1;

    }

    return 0;

}