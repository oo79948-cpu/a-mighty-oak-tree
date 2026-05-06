#include <iostream>
#include "src/oak_tree.hpp"

int main() {
    Squirrel cheeks = Squirrel("Cheeks");
    Node<Squirrel> * node_one = new Node(&cheeks);

    Squirrel squeaks = Squirrel("Squeaks");
    Node<Squirrel>* node_two = new Node(&squeaks);

    Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
    Node<Squirrel>* node_three = new Node(&fluffybutt);

    node_one->set_left(node_two);
    node_one->set_right(node_three);

    Node<Squirrel>* retrieved_node_one = node_one->left(); // This should retrieve the left node
    Node<Squirrel>* retrieved_node_two = node_one->right(); // This should retrieve the right node

    std::cout << retrieved_node_one->get_item()->get_name() << std::endl;
    std::cout << retrieved_node_two->get_item()->get_name() << std::endl;
    delete node_one;
    delete node_two;
    delete node_three;
}
