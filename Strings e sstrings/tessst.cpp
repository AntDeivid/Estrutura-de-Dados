#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int vogal(char a){
    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
        return 1;
    }
    return 0;
}

int silabas(string txt){

    int cont_silaba = 0;
    for(int i = 0; i < (int)txt.size(); i++){
        if(vogal(txt[i]) == 1 && vogal(txt[i+1]) != 1){
            cont_silaba++;
        }
        else if(!(vogal(txt[(int)txt.size() - 1] != 1))){
            cont_silaba++;
        }
    }
    return cont_silaba;
}

int main (){
    stringstream ss;
    string word;
    string aux;
    getline (cin, word);
    
    ss << word;
    bool espaco = false;

    while (ss >> aux){

        bool rep = true;
        bool check = false;
        if (espaco){
            cout << " ";
        }
        if (silabas(aux) > 1){
            
            for (int i = 0; i < (int)aux.size(); i++){

                if(rep == true && vogal(aux[i]) == 1 && vogal(aux[i+1]) != 1 && aux[i+1] != '\0'){
                    
                    for (int j = 0; j <= 2; j++){

                        for (int k = 0; k <= i; k++){

                            cout << aux[k];
                        }
                    }
                    rep = false;
                    i++;
                    check = true;
                }
                if (check == true){
                    cout << aux[i];
                }
            }
        }
        else {
            cout << aux;
        }
        espaco = true;
    }
    return 0;
}