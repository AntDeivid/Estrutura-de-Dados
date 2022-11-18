#include <sstream>
#include <string>
#include "Node.h" 
#include "CircularList.h" 

void CircularList::push_back(const Item& val) { 
    if (this->empyt() == true) {
        m_head = new Node(val, nullptr);
        m_head->next = m_head;
        m_size++;
    }

    else if (m_size == 1) {
        Node *aux = new Node(val, nullptr);
        aux->next = m_head;
        m_head->next = aux;
        m_size++;
    }

    else {
        Node *aux = m_head->next;
        while (aux->next != m_head) {
            aux = aux->next;
        }
        Node *newNode = new Node(val, m_head);
        aux->next = newNode;
        m_size++;
    }
}

void CircularList::pop_back() {
    if (m_head == nullptr) { //Lista com 1 elemento
        return;
    }
    if (m_head->next == m_head) {// Lista com 2 elementos
        delete m_head;
        m_head = nullptr;
        m_size--;
    }
    else { //Lista com 2 ou mais elementos
        Node *ajuda = m_head;
        while (ajuda->next->next != m_head) {
            ajuda = ajuda->next;
        }
        delete aux->next;
        aux->next = m_head;
        m_size--;
    }
}

std::string CircularList::toString() const {
    stringstream ss;
    ss << "[ ";
    if (m_head != nullptr) {
        ss << m_head->value << " ";
        Node *aux = m_head;
        while (aux->next != m_head) {
            aux = aux->next;
            ss << aux->value << " ";
        }
    }
    ss << "]";

    return ss.str();
}

Item& CircularList::operator[](int index) {

    if (index < 0 || index >= m_size) {
        throw std::range_error("indice invalido");
    }

    Node *aux = m_head;
    for (int i = 0; i < index; i++) {
        aux = aux->next;
    }

    return aux->value;
}

const Item& CircularList::operator[](int index) const {
    
    if (index < 0 || index >= m_size) {
        throw std::range_error("indice invalido");
    }

    Node *aux = m_head;
    for (int i = 0; i < index; i++) {
        aux = aux->next;
    }

    return aux->value;

}

void CircularList::clear() {
    if (m_head != nullptr) {
        Node *aux1 = m_head->next;
        Node *aux2 = m_head->next;
        while (aux->next != nullptr) {
            aux2 = aux2->next;
            delete aux1;
            aux1 = aux2;
        }
        delete m_head;
        m_head = nullptr;
        m_size = 0;
    }
}

CircularList::~CircularList() {
    // FAZER
}

