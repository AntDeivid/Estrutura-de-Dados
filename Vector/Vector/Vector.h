#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int* m_list {nullptr}; // ponteiro para a lista
    int  m_size {0};       // numero de elementos na lista
    int  m_capacity {0};   // capacidade total da lista

public:
    // Construtor default: aloca uma lista com 
    // capacidade inicial igual a 16 e size = 0 // O(1)
    Vector() {
        m_capacity = 16;
        m_size = 0;
        m_list = new int[m_capacity];
        std::cout << "lista criada" << std::endl;
    }

    // Copy constructor: cria uma nova lista com os
    // mesmos elementos da lista passada como argumento // O(n)
    Vector(const Vector& vector) {
        this->m_size = vector.m_size;
        this->m_capacity = vector.m_capacity;
        this->m_list = new int[vector.m_capacity];
        for (int i = 0; i < vector.m_size; i++) {
            this->m_list[i] = vector.m_list[i];
        }
    }
    
    // Destrutor: libera memoria alocada // O(1)
    ~Vector() {
        delete[] m_list;
        std::cout << "lista destruida" << std::endl;
    }

    // Retorna a capacidade atual da lista // O(1)
    int capacity() const {return m_capacity;}

    // Retorna o numero de elementos na lista // O(1)
    int size() const {return m_size; }
    
    // Retorna true se e somente se a lista estiver vazia // O(1)
    bool empty() const {return m_size == 0;}

    // Retorna uma referencia para o elemento na posicao k.
    // A funcao verifica automaticamente se n esta dentro dos 
    // limites de elementos validos no vetor, lancando uma 
    // excecao 'out_of_range' se nao estiver. // O(1)
    int& at(int k) {
        std::cout << "at normal chamado" << std::endl;
        if (k < 0 || k >= m_size) {
            throw std::runtime_error("indice invalido");
        }
        return m_list[k];
    } 

    // O(1)
    const int& at(int k) const {
        std::cout << "at const chamado" << std::endl;
        if (k < 0 || k >= m_size) {
            throw std::runtime_error("indice invalido");
        }
        return m_list[k];
    }

    // Retorna uma referencia para o elemento na posicao k.
    // Essas funcoes nao verificam se o indice eh valido.
    int& operator[](int index) { return m_list[ index ]; } // O(1)
    const int& operator[](int index) const { return m_list[ index ]; } // O(1)

    // Solicita que a capacidade do vetor seja >= n.
    // Se n for maior que a capacidade atual do vetor, a 
    // funcao faz com que a lista aumente sua capacidade 
    // realocando os elementos para o novo vetor. Em todos 
    // os outros casos, a chamada da funcao nao causa uma
    // realocacao e a capacidade do vetor nao eh afetada. // O(n)
    void reserve(int n) {
        if (n > m_capacity) { //aumenta a capacidade do array
            int *aux = new int[n];
            for (int i = 0; i < m_size; i++) {
                aux[i] = m_list[i];
            }
            delete[] m_list;
            m_list = aux;
            m_capacity = n;
        }

    }
    
    // Recebe um inteiro como argumento e o adiciona
    // logo apos o ultimo elemento da lista. // tempo medio O(1) //complexidade amortizada O(1)
    void push_back(const int& value) {
        if (m_size == m_capacity) { //lista cheia, precisa aumentar
            reserve(m_capacity * 1.5);
        }
        m_list[m_size] = value;
        m_size++;
    }
    
    // Remove o ultimo elemento da lista se a lista nao
    // estiver vazia. Caso contrario, faz nada // O(1)
    void pop_back() {
        if (!empty()) {
            m_size--;
        }
    }
     
};

#endif