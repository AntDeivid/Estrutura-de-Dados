#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T value;
    Node *next;

    Node(const T &val, Node *nxt) {
        value = val;
        next = nxt;
    }

    ~Node() { delete next; }
};

#endif // NODE_H