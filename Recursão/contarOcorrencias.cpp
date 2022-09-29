#include <iostream>
#include <string>

using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 'str' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int contaCaracteres(string str, int n, char c) {

    int i = n - 1;

    if (i < 0) {

        return 0;

    }

    else {

        if (c == str[i]) {

            return 1 + contaCaracteres(str, i--, c);

        }

        else {

            return contaCaracteres(str, i--, c);

        }

    }
}

int main() {
    
    string str;
    char letra;

    getline(cin, str);
    cin >> letra;

    int total = contaCaracteres(str, (int)str.size(), letra);

    cout << total;

    return 0;
}