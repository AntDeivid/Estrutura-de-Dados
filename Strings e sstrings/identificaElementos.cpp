#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool ehStr(string x) {

    for (int i = 0; i < (int)x.size(); i++) {

        if (isalpha(x[i])) {
            return true;
        }

    }

    return false;

}

bool ehFloat(string y) {

    for (int i = 0; i < (int)y.size(); i++) {

        if (y[i] == '.') {

            return true;

        }

    }

    return false;

}

int main() {

    string texto, aux;
    getline(cin, texto);
    stringstream ss;

    ss << texto;

    while (ss >> aux) {

        if (ehStr(aux)) {

            cout << "str ";

        }

        else if (ehFloat(aux)) {

            cout << "float ";

        }

        else {

            cout << "int ";

        }

    }



    return 0;

}