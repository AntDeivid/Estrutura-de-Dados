#ifndef NODE_H
#define NODE_H

using Item = double;

struct Node {

    Item value;
    Node *next;

    Node (const Item &val, Node *nextPtr) {
        value = val;
        next = nextPtr;
    }

};