// NAO MEXA NESTE ARQUIVO, ELE JA ESTA PRONTO PARA SER USADO PELO MOODLE
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "ForwardList.h"
using namespace std;

// NAO MEXA NESTA FUNCAO, ELA ESTA TERMINADA
int main() {

	vector<ForwardList*> listas;
	
	while(true) {
		string comando, token;
		getline(cin, comando);
		stringstream ss{ comando };
        ss >> token;

        cout << "$" << ss.str() << endl;

		// exit
		if(token == "exit") {
			for(unsigned i = 0; i < listas.size(); i++)
				delete listas[i];
			listas.clear();
			break;
		}
		// create
		else if(token == "create") {
			ForwardList *lst = new ForwardList;
			listas.push_back(lst);
		}
		// createWith l
		else if(token == "createWith") {
			int l;
            ss >> l;
			ForwardList *lst = new ForwardList(*listas[l]);
			listas.push_back(lst);
		}
        // concat l1 l2
		else if(token == "concat") {
			int l1, l2;
            ss >> l1 >> l2;
			listas[l1]->concat(*listas[l2]);
		}
        // removeAll x l
		else if(token == "removeAll") {
			int x, l;
            ss >> x >> l;
			listas[l]->remove(x);
		}
        // clone l
		else if(token == "clone") {
			int l;
            ss >> l;
			ForwardList *lcp = listas[l]->clone();
			listas.push_back(lcp);
		}
        // append l a1 ... an 
		else if(token == "append") {
			int l;
            ss >> l;
			vector<int> vec;
            int value;
            while(ss >> value) {
                vec.push_back(value);
            }
			listas[l]->appendVector(vec);
		}
        // swap l1 l2
        else if(token == "swap") {
			int l1, l2; 
            ss >> l1 >> l2;
			listas[l1]->swap(*listas[l2]);
		}
        // equals l1 l2 
		else if(token == "equals") {
			int l1, l2; 
            ss >> l1 >> l2;
			if(listas[l1]->equals(*listas[l2])) cout << "listas iguais" << endl;
			else cout << "listas diferentes" << endl;
		}
        // reverse l
		else if(token == "reverse") {
			int l;
            ss >> l;
			listas[l]->reverse();
		}
		// get i l
		else if(token == "get") {
			int i, l; 
            ss >> i >> l;
			cout << "elemento na posicao " << i << " da lista " << l << ": " << 
				listas[l]->get(i) << endl;
		}
        // show 
		else if(token == "show") {
            for(unsigned i = 0; i < listas.size(); ++i) {
                cout << "lista " << i << ": " << (*listas[i]).toString() << endl;
            }	
		}
		else {
			cout << "comando inexistente" << endl;
		}
	}
	return 0;
}