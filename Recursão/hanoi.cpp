void hanoi(int qte, char ini, char aux, char fim){
    if(n>=1){
        hanoi(qte-1, ini, fim, aux);
        cout << ini << "->" << fim << endl;
        hanoi(qte-1, aux, ini, fim);
    }
}
