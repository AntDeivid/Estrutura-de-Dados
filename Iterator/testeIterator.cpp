#include <iostream>
#include <vector>

using namespace std;

void print(const vector <int> &vec) {

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        
        cout << *it << " " << endl;

    }

    cout << endl;

}

int main() {

    vector<int> vec {1,2,5,5,3,5,4,5,6,5,7,8};


    //vector<int>::iterator it = vec.begin() ou usar auto
    
    auto it = vec.begin();
    while (it != vec.end()) {
        if (it == 5) {
            vec.erase(it);
        }
        else {it++;}
    }    

    print(vec); 

}