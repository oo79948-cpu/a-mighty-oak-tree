#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include "../src/oak_tree.hpp"
#include "../src/oak_tree.cpp"


TEST_CASE( "new node initializes with the correct item and has left and right set to null" ) {
    Squirrel test = Squirrel("test");
    Node<Squirrel> node = Node<Squirrel>(&test);
    REQUIRE( node.left() == nullptr );
    REQUIRE( node.right() == nullptr );
    REQUIRE( node.get_item()->get_name() == "test" );
}

TEST_CASE( "can set left and right" ) {
    Squirrel test = Squirrel("test");
    Squirrel test_left = Squirrel("left");
    Squirrel test_right = Squirrel("right");
    Node<Squirrel> node = Node<Squirrel>(&test);
    Node<Squirrel> left_node = Node<Squirrel>(&test_left);
    Node<Squirrel> right_node = Node<Squirrel>(&test_right);
    node.set_left(&left_node);
    node.set_right(&right_node);

    REQUIRE( node.left()->get_item()->get_name() == "left" );
    REQUIRE( node.right()->get_item()->get_name() == "right" );
}

TEST_CASE("Long branch test") {
    Squirrel test1 = Squirrel("test1");
    Squirrel test2 = Squirrel("test2");
    Squirrel test3 = Squirrel("test3");
    Squirrel test4 = Squirrel("test4");
    Node<Squirrel> node1 = Node<Squirrel>(&test1);
    Node<Squirrel> node2 = Node<Squirrel>(&test2);
    Node<Squirrel> node3 = Node<Squirrel>(&test3);
    Node<Squirrel> node4 = Node<Squirrel>(&test4);

    node1.set_left(&node2);
    node2.set_left(&node3);
    node3.set_left(&node4);

    REQUIRE(node1.left()->left()->left()->get_item()->get_name() == "test4" );
}
