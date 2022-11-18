// NAO MEXA NESTE ARQUIVO DE CABECALHO, ELE JA ESTA FINALIZADO E PRONTO PARA SER USADO PELO MOODLE
#ifndef NODE_H
#define NODE_H

using Item = int;

class Node {
    friend class ForwardList;
private:
    Item value;  // valor 
    Node* next;  // ponteiro para o proximo no 
public:
    Node(const Item& val, Node *nextPtr) {
        value = val;
        next = nextPtr;
    }
};

#endif