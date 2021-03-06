#include "forest/trie.h"
#include <iostream>

int main(int argc, char const *argv[]) {
        forest::trie trie;

	trie.insert("A");
	trie.insert("to");
        trie.insert("tea");
        trie.insert("ted");
        trie.insert("ten");
        trie.insert("i");
        trie.insert("in");
	trie.insert("inn");

	std::cout << trie.search("A") << " " << "A" << std::endl;
	std::cout << trie.search("to") << " " << "to" << std::endl;
        std::cout << trie.search("tea") << " " << "tea" << std::endl;
        std::cout << trie.search("ted") << " " << "ted" << std::endl;
        std::cout << trie.search("ten") << " " << "ten" << std::endl;
        std::cout << trie.search("i") << " " << "i" << std::endl;
        std::cout << trie.search("in") << " " << "in" << std::endl;
	std::cout << trie.search("inn") << " " << "inn" << std::endl;

        return 0;
}
