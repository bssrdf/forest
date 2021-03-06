![forest logo](https://i.imgur.com/zl44kiK.jpg)

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/7e0feb3d79ca41649aa207eeeef065dc)](https://www.codacy.com/app/xorz57/forest?utm_source=github.com&utm_medium=referral&utm_content=xorz57/forest&utm_campaign=badger)
[![Build Status](https://travis-ci.org/xorz57/forest.svg?branch=master)](https://travis-ci.org/xorz57/forest)
[![codecov](https://codecov.io/gh/xorz57/forest/branch/master/graph/badge.svg)](https://codecov.io/gh/xorz57/forest)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![CLA assistant](https://cla-assistant.io/readme/badge/xorz57/forest)](https://cla-assistant.io/xorz57/forest)
[![Donate](https://img.shields.io/badge/Donate-PayPal-blue.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=AK8MY6ZHKG3H4)

Forest is an open-source, template library of tree data structures written in C++11.

## Features

|Operations|Binary Search Tree|AVL Tree|Red Black Tree|Splay Tree|Trie|
|---|---|---|---|---|---|
|Insert|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|
|Search|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|
|Delete|:x:|:x:|:x:|:x:|:x:|
|Pre Order Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|In Order Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|Post Order Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|Breadth First Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|In Order Predecessor|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|In Order Successor|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||

## Installation

#### Use your favorite package manager
- `vcpkg install forest`

#### Or simply download the header files
- [Binary Search Tree](https://github.com/xorz57/forest/releases/download/4.5.1/binary_search_tree.h)
- [AVL Tree](https://github.com/xorz57/forest/releases/download/4.5.1/avl_tree.h)
- [Red Black Tree](https://github.com/xorz57/forest/releases/download/4.5.1/red_black_tree.h)
- [Splay Tree](https://github.com/xorz57/forest/releases/download/4.5.1/splay_tree.h)
- [Trie](https://github.com/xorz57/forest/releases/download/4.5.1/trie.h)

## Example Code

Forest is best explained through [examples](https://github.com/xorz57/forest/tree/master/examples). The following source code generates a red black tree, inserts 7 nodes and then generates a [DOT](https://en.wikipedia.org/wiki/DOT_(graph_description_language)) file.

```cpp
#include <forest/red_black_tree.h>

int main() {
        // Generate a binary search tree for nodes of integer keys and values
        forest::red_black_tree <int, int> red_black_tree;

        // Insert 7 nodes in the form of a (key, value) pair
        red_black_tree.insert(4,0);
        red_black_tree.insert(2,0);
        red_black_tree.insert(90,0);
        red_black_tree.insert(3,100);
        red_black_tree.insert(0,0);
        red_black_tree.insert(14,0);
        red_black_tree.insert(45,0);

        // Generate a DOT file representing the Red Black Tree
        red_black_tree.graphviz("red_black_tree.dot");

        return 0;
}
```

## Graph Visualization using Graphviz

Forest provides an easy way to visualize tree data structures using the graphviz member function. When this function is called, a [DOT](https://en.wikipedia.org/wiki/DOT_(graph_description_language)) file describing the data structure graph is created. In order to be able to generate an image of the graph you must install [Graphviz](http://www.graphviz.org/). The generated [DOT](https://en.wikipedia.org/wiki/DOT_(graph_description_language)) file can be feed to the dot tool (provided by [Graphviz](http://www.graphviz.org/)) which in turn will generate an image for the graph.

```console
$ dot red_black_tree.dot -Tpng > red_black_tree.png
```

This is the graph visualization of the above example code, generated with the dot tool (provided by [Graphviz](http://www.graphviz.org/)).

![Red Black Tree Graph](https://i.imgur.com/FrRNJ29.png)

Refer to the [Quick Start Guide](https://github.com/xorz57/forest/wiki/Quick-Start-Guide) page for further information and examples.
