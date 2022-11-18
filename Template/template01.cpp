#include <iostream>
using namespace std;

namespace ufc {
    //Compara dois inteiros e retorna o maior entre eles
    template< typename T >
    T max(T x, T y) {
        if (x >= y) { return x; }
        else { return y; }
    }(

    template< typename N >
    void print(vector<N> &vec) {
        for (N elemento : vec) { cout << elemento << " "; }
        cout << endl;
    }
}

int main() {

    cout << ufc::max(34, 67) << endl;
    cout << ufc::max(54.7, 67.8) << endl;
    cout << ufc::max("ana", "aba") << endl;

}