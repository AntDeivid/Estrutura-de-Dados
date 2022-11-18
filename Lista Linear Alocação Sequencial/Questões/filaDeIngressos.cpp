#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n, m, auxM;
    cin >> n;

    vector<int> qPessoas(n);

    for (int i = 0; i < n; i++) {
        cin >> qPessoas[i];
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> auxM;
        int j = 0;
        auto it = qPessoas.begin();
        for (int k = 0; k < qPessoas.size(); k++) {
            if (qPessoas[k] == auxM) { qPessoas.erase(it); }
            it++;
            cout << "#";
        }
    }

    for (int i = 0; i < qPessoas.size(); i++) {
        cout << qPessoas[i] << " ";
    }
    cout << endl;

    return 0;

}