#ifndef _BINARYTREE_TEST_H
#define _BINARYTREE_TEST_H

#include "binarytree_impl.h"

#include <iostream>
using namespace std;

class BinaryTreeTest {
public:
    BinaryTreeTest();

    // 94. Binary Tree Inorder Traversal Test
    void inorderTraversal94Test();

    // 95. Unique Binary Search Trees II Test
    void generateTrees95Test();

    // 98. Validate Binary Search Tree Test
    void isValidBST98Test();

    // 99. Recover Binary Search Tree Test
    void recoverTree99Test();

    // 101. Symmetric Tree Test
    void isSymmetric101Test();
    
private:
    BinaryTreeImpl * implObj;
};

#endif