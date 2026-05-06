#include "oak_tree.hpp"

template <typename T>
void Node<T>::set_left(Node *node) {
    this->left_node = node;
}

template <typename T>
void Node<T>::set_right(Node *node) {
    this->right_node = node;
}

template <typename T>
Node<T>* Node<T>::left() {
    return this->left_node;
}

template <typename T>
Node<T>* Node<T>::right() {
    return this->right_node;
}

template <typename T>
T *Node<T>::get_item() {
    return this->item;
}
