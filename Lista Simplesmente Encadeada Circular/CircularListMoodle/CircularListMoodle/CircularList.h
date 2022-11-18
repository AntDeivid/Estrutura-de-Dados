// Nao mexa, ja esta terminado
#ifndef CLIST_H
#define CLIST_H
#include <string>
#include "Node.h"

class CircularList {
private:
    Node *m_head {nullptr};     // ponteiro para o primeiro node da lista
    int m_size {0};             // guarda o numero de elementos da lista

public:
    CircularList() = default; 
    bool empty() const { return m_head == nullptr; } 
    int size() const { return m_size; }

    void push_back(const Item& val);            // fazer
    void pop_back();                            // fazer
    Item& operator[](int index);                // fazer
    const Item& operator[](int index) const;    // fazer
    std::string toString() const;               // fazer
    void clear();                               // fazer
    ~CircularList();                            // fazer
};

#endif