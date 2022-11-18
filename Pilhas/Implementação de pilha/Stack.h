#ifndef STACK_H
#define STACK_H
#include <stdexcept>
#include "Node.h"

template <typename T>
class Stack {
    private:
        Node<T> *m_top{nullptr};
        int m_size{0};
    public:
        Stack() = default;
        bool empyt() const { return m_size == 0; }
        int size() const { return m_size; }
        T& top() {
            if (m_top == nullptr) {
                throw std::underflow_error("Empyt stack");
            }
            return m_top->value;
        }
        const T& top() const {
            if (m_top == nullptr) {
                throw std::underflow_error("Empyt stack");
            }
            return m_top->value;
        }
        void push(const T& val) {
            Node<T> *aux = new Node<T>(val, m_top);
            m_top = aux;
            m_size++;
        }
        void pop() {
            if (m_top == nullptr) {
                throw std::underflow_error("Empyt stack");
            }
            Node<T> *aux = m_top;
            m_top = aux->next;
            aux->next = nullptr;
            delete aux;
            m_size--;
        }
        ~Stack() {
            delete m_top;
        }
};

#endif