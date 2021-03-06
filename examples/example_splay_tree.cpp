#include "forest/splay_tree.h"
#include <iostream>

int main(int argc, char const *argv[]) {
        forest::splay_tree <int, int> splay_tree;

        splay_tree.insert(4,0);
        splay_tree.insert(2,0);
        splay_tree.insert(90,0);
        splay_tree.insert(3,100);
        splay_tree.insert(0,0);
        splay_tree.insert(14,0);
        splay_tree.insert(45,0);

        std::cout << "Pre Order Traversal" << std::endl;
        std::cout << std::endl;
        splay_tree.pre_order_traversal();
        std::cout << std::endl;

        std::cout << "In Order Traversal" << std::endl;
        std::cout << std::endl;
        splay_tree.in_order_traversal();
        std::cout << std::endl;

        std::cout << "Post Order Traversal" << std::endl;
        std::cout << std::endl;
        splay_tree.post_order_traversal();
        std::cout << std::endl;

        std::cout << "Breadth First Traversal" << std::endl;
        std::cout << std::endl;
        splay_tree.breadth_first_traversal();
        std::cout << std::endl;

        auto min = splay_tree.minimum();
        if (min != nullptr) {
                std::cout << "Minimum: " << min->key << std::endl;
        }

        auto max = splay_tree.maximum();
        if (max != nullptr) {
                std::cout << "Maximum: " << max->key << std::endl;
        }

        auto predecessor = splay_tree.predecessor(90);
        if (predecessor != nullptr) {
                std::cout << "Predecessor of 90: " << predecessor->key << std::endl;
        }

        auto successor = splay_tree.successor(3);
        if (successor != nullptr) {
                std::cout << "Successor of 3: " << successor->key << std::endl;
        }

        std::cout << "Height: " << splay_tree.height() << std::endl;

        std::cout << "Size: " << splay_tree.size() << std::endl;

	std::cout << "Empty: " << (splay_tree.empty() ? "yes" : "no") << std::endl;

        auto n = splay_tree.search(3);
        if (n != nullptr) {
                std::cout << std::endl;
                std::cout << "Found node with key 3" << std::endl;
                std::cout << std::endl;
                n->info();
        }

        splay_tree.graphviz("splay_tree.dot");

        return 0;
}
