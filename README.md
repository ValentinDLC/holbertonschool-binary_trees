# 🧠 Binary Trees Project

![C](https://img.shields.io/badge/language-C-blue)
![Betty Style](https://img.shields.io/badge/style-Betty%20compliant-yellow)
![License](https://img.shields.io/badge/license-MIT-green)

## 📚 Table of Contents

- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Data Structures](#data-structures)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Project Tasks](#project-tasks)
- [Diagram Example](#diagram-example)
- [Team](#team)
- [Score](#score)

---

## 📝 Description

This C project implements various operations and algorithms related to binary trees.  
It provides hands-on experience with core tree structures:

- Binary Trees
- Binary Search Trees (BST)
- AVL Trees
- Max Binary Heaps

You will learn to create, traverse, analyze, and manipulate trees in multiple ways.

---

## 🎯 Learning Objectives

After completing this project, you will be able to:

- ✅ Explain the structure and behavior of binary trees
- ✅ Distinguish between binary trees and binary search trees
- ✅ Evaluate time complexity benefits of tree operations
- ✅ Compute depth, height, and size of a tree
- ✅ Implement traversal algorithms (pre-order, in-order, post-order)
- ✅ Classify trees: complete, full, perfect, or balanced
- ✅ Work with advanced concepts like siblings, uncles, and balance factors

---

## 🧱 Data Structures

```c
/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;   // Basic binary tree
typedef struct binary_tree_s bst_t;           // Binary Search Tree
typedef struct binary_tree_s avl_t;           // AVL Tree
typedef struct binary_tree_s heap_t;          // Max Binary Heap
```

## ⚙️ Requirements

### Compilation:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

### Style:

Betty-compliant code (mandatory)

### File Requirements:

Max 5 functions per file
No global variables
Header files must be include-guarded

### Documentation:

https://en.wikipedia.org/wiki/Binary_tree
https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm
https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm
https://en.wikipedia.org/wiki/Binary_search_tree
https://www.youtube.com/watch?v=H5JubkIy_p8

## 📌 Project Tasks

### 🧩 Basic Operations

Create a new node
Insert a node (left/right)
Delete an entire tree
Check if a node is a leaf or root

### 🔁 Tree Traversals

Pre-order traversal
In-order traversal
Post-order traversal

### 📐 Tree Properties

Measure height and depth
Count leaves and total nodes
Check if tree is:
Full
Perfect
Balanced
Compute the balance factor

### 🧠 Advanced Concepts

Find a node’s sibling or uncle
Implement Binary Search Tree logic
Convert arrays to trees
Rotate trees (for AVL logic)

### 🌳 Diagram Example

Here's a basic example of a binary tree:
98
/ \
 12 402
/ \ \
 6 56 512

## 👥 Team

[Valentin Dardenne](https://github.com/ValentinDLC)
[Rebecca Fiesque](https://github.com/SG1-Rebecca)

## 🧮 Score

Current Progress: 0/100
Status will be updated as tasks are completed.
