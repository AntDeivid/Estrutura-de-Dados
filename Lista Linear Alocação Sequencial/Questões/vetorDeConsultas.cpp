#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> matchingStrings(int tamConsulta, vector<string> &consulta, int tamBusca, vector<string> &busca) {

    vector<int> result;
    result.reserve(busca.size());

    for (int i = 0; i < tamBusca; i++) {
        int contador = 0;
        for (int j = 0 ; j < tamConsulta; j++) {
            if (busca[i] == consulta[j]) {
                contador++;
                //cout << busca[i];
            }
        }
        result.push_back(contador);
    }

    return result;

}

int main() {

    stringstream ss;
    string aux, aux2;
    int tamConsulta, tamBusca;
    
    
    vector<int> result;

    cin >> tamConsulta;
    vector<string> consulta(tamConsulta);
    for (int i = 0; i < tamConsulta; i++) {
        cin >> consulta[i];
    }

    ss.clear();

    cin >> tamBusca;
    vector<string> busca(tamBusca);
    cin.ignore();
    for (int i = 0; i < tamBusca; i++) {
        cin >> busca[i];
    }

    result = matchingStrings(tamConsulta, consulta, tamBusca, busca);

    for (int i = 0; i < result.size(); i++) {
        if (i = 0) { cout << result[i]; }
        else { cout << " " << result[i]; }
        
    }

    return 0;

}