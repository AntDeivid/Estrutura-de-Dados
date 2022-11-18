#ifndef NODE_H
#define NODE_H

template < typename T>
struct Node {
    T value;    // valor a ser enfileirado
    Node *next; // ponteiro para o proximo da fila

    // Construtor
    Node(const T& val, Node* nxt) {
        value = val;
        next = nxt;
    }
    // Destrutor
    ~Node() {
        delete next; // libera o proximo node
    }
};

#endif