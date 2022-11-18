#ifndef NODE_H
#define NODE_H

template<typename T>
struct Node{

    T value;
    Node *next; //poninter to next node
    Node *prev; //poninter to previous node

    Node(const T& val, Node *prev, Node *next){
        value = val;
        this->prev = prev;
        this->next = next;
    }
    ~Node() { std::cout << "Node " << value << " liberado\n"; }
};

#endif