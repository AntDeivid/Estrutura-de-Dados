/************************************************************************
 * Arquivo de implementacao da classe ForwardList
 * No final deste arquivo existem algumas funcoes que estao incompletas 
 * e voce precisa implementa-las para concluir a atividade
 ************************************************************************/
#include <vector>
#include <stdexcept>
#include <string>
#include "Node.h"
#include "ForwardList.h"

/***************************************************
 * Implementacao das funcoes-membro da classe
 ***************************************************/

ForwardList::ForwardList() {
    m_head = new Node(0, nullptr);
    m_size = 0;
}

ForwardList::ForwardList(const ForwardList& lst) {
    m_head = new Node(0, nullptr);
    m_size = lst.m_size;
    Node *lstCurrent = lst.m_head->next;
    Node *thisLast = m_head;
    while(lstCurrent != nullptr) {
        thisLast->next = new Node(lstCurrent->value, nullptr);
        lstCurrent = lstCurrent->next;
        thisLast = thisLast->next;
    }
}

bool ForwardList::empty() const {
    return m_head->next == nullptr;
}

int ForwardList::size() const {
    return m_size;
}

void ForwardList::clear() {
    while(m_head->next != nullptr) {
        Node *aux = m_head->next;
        m_head->next = aux->next;
        delete aux;
    }
    m_size = 0;
}

ForwardList::~ForwardList() {
    clear();
    delete m_head;
}

Item& ForwardList::operator[](int index) {
    int count = 0;
    Node *current = m_head->next;
    while(count < index) {
        current = current->next;
        count++;
    }
    return current->value;
}

const Item& ForwardList::operator[](int index) const {
    int count = 0;
    Node *current = m_head->next;
    while(count < index) {
        current = current->next;
        count++;
    }
    return current->value;
}

void ForwardList::insert_at(int index, const Item& val) {
    int count = 0;
    Node *current = m_head;
    while(count < index) {
        current = current->next;
        count++;
    }
    Node *newNode = new Node(val, current->next);
    current->next = newNode;
    m_size++;
}

void ForwardList::remove_at(int index) {
    int count = 0;
    Node *current = m_head;
    while(count < index) {
        current = current->next;
        count++;
    }
    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
    m_size--;
}

std::string ForwardList::toString() {
    std::string str = "[ ";
    Node *ptr = m_head->next;
    while(ptr != nullptr) {
        str += std::to_string(ptr->value) + " ";
        ptr = ptr->next;
    }
    str += "]";
    return str;
}

/***********************************************************
 * Funcoes adicionais - Parte 2
 ***********************************************************/

void ForwardList::concat(ForwardList& lst) {
    
    Node *aux1 = this->m_head;
    Node *aux2 = lst.m_head->next;

    while (aux1->next != nullptr) { aux1 = aux1->next; }
    while (aux2->next != nullptr) {
        aux1->next = aux2;
        aux1 = aux1->next;
        aux2 = aux2->next;
    }

    lst.clear();

}

void ForwardList::remove(const Item& val) {
    
    Node *aux = m_head->next;
    Node *aux2 = m_head;
    while (aux != nullptr) {
        if (aux->value == val) {
            aux2->next = aux->next;
            delete aux;
            aux = aux2->next;
            m_size--;
        }
        else { aux = aux->next; aux2 = aux2->next; }
    }

}

ForwardList* ForwardList::clone() {
    ForwardList *lst = new ForwardList;

    lst->m_head = new Node(0, nullptr);
    lst->m_size = this->m_size;
    Node *aux = this->m_head->next;
    Node *aux2 = lst->m_head;
    while(aux != nullptr) {
        aux2->next = new Node(aux->value, nullptr);
        aux = aux->next;
        aux2 = aux2->next;
    }

    return lst;

}

void ForwardList::appendVector(const std::vector<Item>& vec) {

    Node *aux = this->m_head;
    while (aux->next != nullptr) { aux = aux->next; }

    for (int i : vec) {
        Node *aux2 = new Node(i, nullptr);
        aux->next = aux2;
        aux = aux->next;
    } 
}

void ForwardList::swap(ForwardList& lst) {

    Node *aux = this->m_head;
    this->m_head = lst.m_head;
    lst.m_head = aux;
    
}

bool ForwardList::equals(const ForwardList& lst) const {
    
    if (this->m_size == lst.m_size) {
        Node *aux = this->m_head;
        Node *aux2 = lst.m_head;
        while (aux->next != nullptr) {
            if (aux->value != aux2->value) {
                return false;
            }
            aux = aux->next;
            aux2 = aux2->next;
        }
    }

    return true;

}

void ForwardList::reverse() {
    // fazer
}

Item& ForwardList::get(int index) {
    // fazer
}

const Item& ForwardList::get(int index) const {
    // fazer
}
