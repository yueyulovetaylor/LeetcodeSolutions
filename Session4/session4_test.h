#ifndef _SESSION_4_TEST_H
#define _SESSION_4_TEST_H

#include "session4_impl.h"

class Session4Test 
{
public:
    Session4Test() 
    {
        cout << "Test object for Leetcode Session 4 problems constructed.\n";
        implObj = new Session4Impl();
    }

    // 402. Remove K Digits Test
    void removeKdigits402Test() {
        cout << "402. Remove K Digits test starts.\n";
        string num = "1432219";
        cout << "1432219 => [" << implObj->removeKdigits402(num, 3) << "]\n\n";
        return;
    }

    // 403. Frog Jump Test
    void canCross403Test() {
        cout << "403. Frog Jump test starts.\n";
        vector<int> nums = {0, 1, 3, 5, 6, 8, 12, 17};
        cout << "Can find = [" << implObj->canCross403(nums) << "]\n\n";
        return;
    }

    // 406. Queue Reconstruction by Height Test
    void reconstructQueue406Test() {
        cout << "406. Queue Reconstruction by Height test starts.\n";
        vector<vector<int>> people = {
            {7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}
        };
        cout << "result = [";
        vector<vector<int>> result = implObj->reconstructQueue406(people);
        for (int i = 0; i < result.size(); ++i) {
            cout << "[" << result[i][0] << ", " << result[i][1] << "]"
                << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 410. Split Array Largest Sum Test
    void splitArray410Test() {
        cout << "410. Split Array Largest Sum test starts.\n";
        vector<int> nums = {7, 2, 5, 10, 8};
        cout << "Min(Max(sub array sum)) = [" << implObj->splitArray410(nums, 2) << "]\n\n";
        return;
    }

    // 412. Fizz Buzz Test
    void fizzBuzz412Test() {
        cout << "412. Fizz Buzz test starts.\n";
        vector<string> result = implObj->fizzBuzz412(15);
        cout << "result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 414. Third Maximum Number Test
    void thirdMax414Test() {
        cout << "414. Third Maximum Number test starts.\n";
        vector<int> nums = {3, 2, 1};
        cout << "Third Max = [" << implObj->thirdMax414(nums) << "].\n\n";
        return;
    }

    // 415. Add Strings Test
    void addStrings415Test() {
        cout << "415. Add Strings test starts.\n";
        cout << "123 + 568 = [" << implObj->addStrings415("123", "568") << "]\n\n";
        return;
    }

    // 416. Partition Equal Subset Sum Test
    void canPartition416Test() {
        cout << "416. Partition Equal Subset Sum test starts.\n";
        vector<int> nums = {1, 5, 11, 5};
        cout << "Can partition = [" << implObj->canPartition416(nums) << "]\n\n";
        return;
    }

    // 417. Pacific Atlantic Water Flow Test
    void pacificAtlantic417Test() {
        cout << "417. Pacific Atlantic Water Flow test starts.\n";
        vector<vector<int>> matrix = {
            {1, 2, 2, 3, 5},
            {3, 2, 3, 4, 4},
            {2, 4, 5, 3, 1},
            {6, 7, 1, 4, 5},
            {5, 1, 1, 2, 4}
        };
        vector<vector<int>> result = implObj->pacificAtlantic417(matrix);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << "(" << result[i][0] << ", " << result[i][1] << ")"
                << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 418. Sentence Screen Fitting Test
    void wordsTyping418Test() {
        cout << "418. Sentence Screen Fitting test starts.\n";
        int rows = 3, cols = 6; 
        vector<string> sentence = {"a", "bcd", "e"};
        cout << "Repeating = [" << implObj->wordsTyping418(sentence, rows, cols) << "]\n\n";
        return;
    }

    // 419. Battleships in a Board Test
    void countBattleships419Test() {
        cout << "419. Battleships in a Board test starts.\n";
        vector<vector<char>> ships = {
            {'X', '.', '.', 'X'},
            {'.', '.', '.', 'X'},
            {'.', '.', '.', 'X'}
        };

        cout << "# of ships = [" << implObj->countBattleships419(ships) << "]\n\n";
        return;
    }

    // 424. Longest Repeating Character Replacement Test
    void characterReplacement424Test() {
        cout << "424. Longest Repeating Character Replacement test starts.\n";
        cout << "Longest replacement len = [" << implObj->characterReplacement424("AABABBA", 2) << "]\n\n";
        return;
    }

    // 426. Convert Binary Search Tree to Sorted Doubly Linked List Test
    void treeToDoublyList426Test() {
        cout << "426. Convert Binary Search Tree to Sorted Doubly Linked List test starts.\n";
        Node426 * root = new Node426(4, NULL, NULL);
        root->left = new Node426(2, NULL, NULL);
        root->right = new Node426(5, NULL, NULL);;

        Node426 * cur = root->left;
        cur->left = new Node426(1, NULL, NULL);
        cur->right = new Node426(3, NULL, NULL);

        Node426 * result = implObj->treeToDoublyList426(root);
        cout << "Please exam result = [" << result->val << "]\n\n";
        return;
    }

    // 428. Serialize and Deserialize N-ary Tree Test
    void Codec428Test() {
        cout << "428. Serialize and Deserialize N-ary Tree test starts.\n";
        Session4Impl::Codec428 codec;
        Node428 * child1 = new Node428(3, {
            new Node428(5, {}), new Node428(6, {})
        });
        Node428 * child2 = new Node428(2, {});
        Node428 * child3 = new Node428(4, {});
        Node428 * root = new Node428(1, {child1, child2, child3});
        
        string str_res = codec.serialize(root);
        cout << "Serilize result = [" << str_res << "]\n";
        cout << "Please exam deserilze result = [" << codec.deserialize(str_res)->val << "]\n\n";
        return;
    }

    // 430. Flatten a Multilevel Doubly Linked List Test
    void flatten430Test() {
        cout << "430. Flatten a Multilevel Doubly Linked List test starts.\n";
        Node430* head = new Node430(1, NULL, NULL, NULL);
        Node430* node2 = new Node430(2, NULL, NULL, NULL);
        Node430* node3 = new Node430(3, NULL, NULL, NULL);
        Node430* node4 = new Node430(4, NULL, NULL, NULL);
        Node430* node5 = new Node430(5, NULL, NULL, NULL);
        Node430* node6 = new Node430(6, NULL, NULL, NULL);

        head->next = node2; node2->prev = head;
        node2->next = node3; node3->prev = node2;
        node3->next = node4; node4->prev = node3;

        node5->next = node6; node6->prev = node5;
        node3->child = node5;

        Node430* result = implObj->flatten430(head);
        cout << "Please exam [" << result << "]\n\n";
        return;
    }

    // 432. All O`one Data Structure Test
    void AllOne432Test() {
        cout << "432. All O`one Data Structure test starts.\n";
        Session4Impl::AllOne432 obj;
        obj.inc("A");
        obj.inc("B");
        obj.inc("B");
        obj.inc("B");
        obj.inc("B");
        obj.inc("B");
        obj.dec("B");
        obj.dec("B");
        cout << "getMax = [" << obj.getMaxKey() << "]; getMin = [" << obj.getMinKey() << "]\n\n";
    }

    // 433. Minimum Genetic Mutation Test
    void minMutation433Test() {
        cout << "433. Minimum Genetic Mutation test starts.\n";
        string start = "AAAAACCC";
        string end = "AACCCCCC";
        vector<string> bank = {"AAAACCCC", "AAACCCCC", "AACCCCCC"};
        cout << "# of steps to reach = [" << implObj->minMutation433(start, end, bank) << "]\n\n";
        return;
    }

private:
    Session4Impl * implObj;
};

#endif