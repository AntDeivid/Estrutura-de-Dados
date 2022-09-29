#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void imprimirVetor(vector<int> a, int n){
    if(n==1){
        cout << a[n-1] << " ";
    }else{
        imprimirVetor(a,n-1);
        cout << a[n-1] << " ";
    }

}

void contrario(vector<int> a, int n){
    if(n==1){
        cout << a[n-1] << " ";
    }else{
        cout << a[n-1] << " ";
        contrario(a,n-1);
    }

}

int soma(vector<int> a,int n){
    if(n==1){
        return a[n-1];
    }else{
        return a[n-1] + soma(a,n-1);
    }
}

int mult(vector<int> a,int n){   
    if(n==1){
        return a[n-1];
    }else{
        return a[n-1] * mult(a,n-1);
    }
}

int menorElemento(vector<int> a, int n){
   if (n == 1){
      return a[n-1];
    }else{
      int menor = menorElemento(a,n-1);
      if(menor < a[n-1] ){
         return menor;
         }
      else{
         return a[n-1];
      }
    }
}


int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> vet;
    int value;
    while(ss >> value)
        vet.push_back(value);

    /*for (int i = 0; i < vet.size(); i++) {
        cout << vet[i] <<" ";
    }*/
    // imprimirVetor O VETOR
    cout << "vet : [ ";
    imprimirVetor(vet, vet.size());
    cout << "]";
    cout << endl;

    //imprimirVetor o vetor ao contrairo
    cout << "rvet: [ ";
    contrario(vet,vet.size());
    cout << "]";
    cout << endl;
    
    //impre a soma do vetor
    cout <<"sum : " <<soma(vet,vet.size())<< endl;
    //imprimirVetor a mult do vetor
    cout <<"mult: "<< mult(vet,vet.size()) << endl;
    //imprimirVetor o menor do vetor
    cout <<"min : " << menorElemento(vet,vet.size()) << endl;
    //imprimirVetor o vetor asdoasod
    cout << "inv : [ ";
    contrario(vet,vet.size());
    cout << "]";
    cout << endl;
}