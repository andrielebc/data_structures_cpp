/**
 * 2024-2025 Andriele Busatto do Carmo
 * 
 * Créditos:      
 * Implementação realizada em C++ com base em implementação originalmente 
 * realizada em Java pelos professores de programação da Unisinos.
 *                        
 * Implementação utilizada apenas para fins didáticos.
 *
 * Descrição:
 * Classe que representa um nó em uma lista simplesmente encadeada.
 *
 **/

#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <typename T>
class Node {
    protected:
        T element;
        Node<T>* next;
    public:
        Node(T element);
        T getElement() const;
        void setElement(T element);
        Node<T>* getNext() const;
        void setNext(Node<T>* next);
};

template <typename T>
Node<T>::Node(T element) {
    this->element = element;
    next = nullptr;
}

template <typename T>
T Node<T>::getElement() const {
    return element;
}

template <typename T>
void Node<T>::setElement(T element) {
    this->element = element;
}

template <typename T>
Node<T>* Node<T>::getNext() const {
    return next;
}

template <typename T>
void Node<T>::setNext(Node<T>* next) {
    this->next = next;
}

#endif
