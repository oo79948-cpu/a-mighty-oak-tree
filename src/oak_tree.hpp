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
    Node* left_node;
    Node* right_node;
public:
    Node(T* item) {
        this->item = item;
        this->left_node = nullptr;
        this->right_node = nullptr;
    }
    void set_left(Node* node);
    void set_right(Node* node);
    Node* left();
    Node* right();
    T* get_item();
};