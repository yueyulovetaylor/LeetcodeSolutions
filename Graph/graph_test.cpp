#include "graph_test.h"

GraphTest::GraphTest() {
    cout << "Test object for Leetcode Graph problems constructed.\n";
    implObj = new GraphImpl();
}

// 126. Word Ladder II Test
void GraphTest::findLadders126Test() {
    cout << "126. Word Ladder II test starts.\n";
    string startWord = "hit", endWord = "cog";
    vector<string> wordList = {"hot","dot","dog","lot","log","cog"};

    vector<vector<string>> result = implObj->findLadders126(startWord, endWord, wordList);
    cout << "Result = [\n";
    for (int i = 0; i < result.size(); ++i) {
        cout << "  [";
        for (int j = 0; j < result[i].size(); ++j) {
            cout << result[i][j] << ((j == result[i].size() - 1) ? "" : ", ");
        }
        cout << "]\n";
    }
    cout << "]\n\n";
    return;
}

// 127. Word Ladder Test
void GraphTest::ladderLength127Test() {
    cout << "127. Word Ladder test starts.\n";
    string startWord = "hit", endWord = "cog";
    vector<string> wordList = {"hot","dot","dog","lot","log","cog"};

    cout << "Steps needed from being to end = [" 
        << implObj->ladderLength127(startWord, endWord, wordList) << "].\n\n";
    return;
}

// 133. Clone Graph Test
void GraphTest::cloneGraph133Test() {
    cout << "133. Clone Graph test starts.\n";
    Node * n1 = new Node(); n1->val = 1;
    Node * n2 = new Node(); n2->val = 2;
    Node * n3 = new Node(); n3->val = 3;
    Node * n4 = new Node(); n4->val = 4;

    n1->neighbors = {n2, n3};
    n2->neighbors = {n1, n4};
    n3->neighbors = {n1, n4};
    n4->neighbors = {n4, n2};

    Node * clone = implObj->cloneGraph133(n1);
    cout << "Please exam in debugger [" << clone->val << "].\n\n";
    return;
}