#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string texto, aux, aux1 = "";
    getline(cin, texto);
    char escolha;
    cin >> escolha;
    stringstream ss;
    ss << texto;

    if (escolha == 'M') {

        for (int i = 0; i < (int)texto.size(); i++) {

            cout << (char)toupper(texto[i]);

        }

    }

    else if (escolha == 'm') {

        for (int i = 0; i < (int)texto.size(); i++) {

            cout << (char)tolower(texto[i]);

        }

    }

    else if(escolha == 'p') {

        while (ss >> aux) {

            if ((int)aux.size() > 1) {

                aux[0] = (char)toupper(aux[0]);

            }
            
            else if ((int)aux.size() == 1) {
                
                aux[0] = (char)tolower(aux[0]);
                
            }
            
            if (aux1 == "") {
                
                aux1 += aux;
                
            }
            
            else {
                
                aux1 += " ";
                aux1 += aux;
                
            }

        }
        
        cout << aux1;
    
    }

    else {

        for (int i = 0; i < (int)texto.size(); i++) {

            if (texto[i] >= 65 && texto[i] <= 90) {

                cout << (char)tolower(texto[i]);

            }

            else if (texto[i] >= 97 && texto[i] <= 122) {

                cout << (char)toupper(texto[i]);

            }

            else {

                cout << texto[i];

            }

        }

    }

    return 0;

}