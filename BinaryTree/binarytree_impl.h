#ifndef _BINARYTREE_IMPL_H
#define _BINARYTREE_IMPL_H

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

class BinaryTreeImpl {
public:
    BinaryTreeImpl();

    // 94. Binary Tree Inorder Traversal
    vector<int> inorderTraversal94(TreeNode* root);

    // 95. Unique Binary Search Trees II
    vector<TreeNode*> generateTrees95(int n);

    // 98. Validate Binary Search Tree
    bool isValidBST98(TreeNode* root);

    // 99. Recover Binary Search Tree
    void recoverTree99(TreeNode* root);

    // 101. Symmetric Tree
    bool isSymmetric101(TreeNode* root);

    // 102. Binary Tree Level Order Traversal
    vector<vector<int>> levelOrder102(TreeNode* root);

    // 103. Binary Tree Zigzag Level Order Traversal
    vector<vector<int>> zigzagLevelOrder103(TreeNode* root);

    // 104. Maximum Depth of Binary Tree (DFS)
    int maxDepth104(TreeNode* root);

    // 105. Construct Binary Tree from Preorder and Inorder Traversal
    TreeNode* buildTree105(vector<int>& preorder, vector<int>& inorder);

    // 106. Construct Binary Tree from Inorder and Postorder Traversal
    TreeNode* buildTree106(vector<int>& inorder, vector<int>& postorder);

    // 108. Convert Sorted Array to Binary Search Tree
    TreeNode* sortedArrayToBST108(vector<int>& nums);

    // 109. Convert Sorted List to Binary Search Tree
    TreeNode* sortedListToBST109(ListNode* head);

    // 113. Path Sum II
    vector<vector<int>> pathSum113(TreeNode* root, int sum);

    // 114. Flatten Binary Tree to Linked List
    void flatten114(TreeNode* root);

    // 116. Populating Next Right Pointers in Each Node
    Node* connect116(Node* root);

private:
    // 94. Binary Tree Inorder Traversal helper
    void inorderTraversal94DFS(TreeNode *curNode, vector<int> & result);

    // 95. Unique Binary Search Trees II helper
    vector<TreeNode*> generateTrees95Rec(int start, int end);

    // 98. Validate Binary Search Tree helper
    bool isValidBST98PreOrder(TreeNode *cur, long minVal, long maxVal);

    // 99. Recover Binary Search Tree helper
    void recoverTree99InOrder(
        TreeNode * cur, 
        vector<TreeNode *> & allNodes,
        vector<int> & allValues
    );

    // 101. Symmetric Tree helper
    bool isSymmetric101DFS(TreeNode *left, TreeNode *right);

    // 105. Construct Binary Tree from Preorder and Inorder Traversal helper
    TreeNode * buildTree105helper(
        const vector<int>& pre, int preLeft, int preRight,
        const vector<int>& in, int inLeft, int inRight
    );

    // // 108. Convert Sorted Array to Binary Search Tree helper
    TreeNode * sortedArrayToBST108helper(
        const vector<int>& arr, int left, int right
    );

    // 106. Construct Binary Tree from Inorder and Postorder Traversal helper
    TreeNode * buildTree106helper(
        const vector<int>& in, int inLeft, int inRight, 
        const vector<int>& post, int postLeft, int postRight
    );

    // 113. Path Sum II helper
    void pathSum113helper(
        vector<int> & curResult,
        vector<vector<int>> & allResults,
        int remain,
        TreeNode * cur
    );
};

#endif