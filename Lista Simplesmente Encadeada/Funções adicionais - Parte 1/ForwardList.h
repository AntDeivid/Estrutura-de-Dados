// NAO MEXA NESTE ARQUIVO DE CABECALHO, ELE JA ESTA FINALIZADO E PRONTO PARA SER USADO PELO MOODLE
#ifndef FORWARDLIST_H
#define FORWARDLIST_H
#include <vector>
#include <string>
#include "Node.h"

/**************************************
 * Declaracao da classe ForwardList
 **************************************/
class ForwardList {
private:
    /**
     * m_head: ponteiro para o inicio da lista.
     * O ponteiro m_head sempre aponta para um no sentinela.
     */
    Node* m_head; 
    /**
     * m_size: numero de elementos na lista 
     */
    int m_size;  
    
public:
    // construtor: cria lista vazia
    ForwardList();

    // construtor de copia
    ForwardList(const ForwardList& lst);

    // retorna true se e somente se a lista esta vazia
    bool empty() const;

    // retorna o numero de elementos na lista
    int size() const;

    // deixa a lista vazia: size() == 0
    void clear();

    // destrutor: libera toda a memoria alocada, ate mesmo o no sentinela
    ~ForwardList();

    // operador[] para acesso a elemento
    // nao checa se indice eh valido
    Item& operator[](int index);
    const Item& operator[](int index) const;

    // insere um elemento no indice especificado
    void insert_at(int index, const Item& val);

    // remove o elemento no indice especificado
    void remove_at(int index);

    // retorna uma string contendo os elementos da lista entre colchetes [ ]
    std::string toString();

    // --------------------------------------------------------- //
    // ----------- funcoes adicionais - parte 1 ---------------- //
    // --------------------------------------------------------- //

    // retorna uma referencia para o primeiro elemento na lista
    // Restricao: estar proibido usar funções auxiliares nesta questao,
    // inclusive qualquer dos operadores sobrecarregados
    Item& front();
    const Item& front() const;
    
    // insere um elemento no inicio da lista
    // Restricao: estar proibido usar funções auxiliares nesta questao,
    // inclusive qualquer dos operadores sobrecarregados
    void push_front(const Item& val);

    // deleta o primeiro elemento da lista
    // Restricao: estar proibido usar funções auxiliares nesta questao,
    // inclusive qualquer dos operadores sobrecarregados
    void pop_front();

    // retorna uma referencia para o ultimo elemento na lista
    // Restricao: estar proibido usar funções auxiliares nesta questao,
    // inclusive qualquer dos operadores sobrecarregados
    Item& back();
    const Item& back() const;
    
    // insere um elemento no final da lista
    // Restricao: estar proibido usar funções auxiliares nesta questao,
    // inclusive qualquer dos operadores sobrecarregados
    void push_back(const Item& val);

    // deleta o ultimo elemento da lista
    // Restricao: estar proibido usar funções auxiliares nesta questao,
    // inclusive qualquer dos operadores sobrecarregados
    void pop_back();

};

#endif