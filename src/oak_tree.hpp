#pragma once

#include <string>

class Squirrel {
private:
    std::string name;
public:
    Squirrel(std::string name) {
        this->name = name;
    }
    std::string get_name() {
        return this->name;
    }
};

template <typename T>
class Node {
    T* item;
    Node<T>* left_node;
    Node<T>* right_node;
public:
    Node<T>(T* item) {
        this->item = item;
        this->left_node = nullptr;
        this->right_node = nullptr;
    }
    void set_left(Node<T>* node);
    void set_right(Node<T>* node);
    Node<T>* left();
    Node<T>* right();
    T* get_item();
};