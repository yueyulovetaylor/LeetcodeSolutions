#ifndef _SESSION_2_TEST_H
#define _SESSION_2_TEST_H

#include "session2_impl.h"

class Session2Test {
public:
    Session2Test() {
        cout << "Test object for Leetcode Session 2 problems constructed.\n";
        implObj = new Session2Impl();
    }

    // 201. Bitwise AND of Numbers Range Test
    void rangeBitwiseAnd201Test() {
        cout << "201. Bitwise AND of Numbers Range test starts.\n";
        int result = implObj->rangeBitwiseAnd201(26, 30);
        cout << "range AND = [" << result << "]\n\n";
        return;
    }

    // 202. Happy Number Test
    void isHappy202Test() {
        cout << "202. Happy Number test starts.\n";
        cout << "19 is happy number = [" << implObj->isHappy202(19) << "]\n\n";
        return;
    }

    // 203. Remove Linked List Elements Test
    void removeElements203Test() {
        cout << "203. Remove Linked List Elements test starts.\n";
        ListNode *head = new ListNode(1);
        ListNode *cur = head;
        cur->next = new ListNode(2); cur = cur->next;
        cur->next = new ListNode(6); cur = cur->next;
        cur->next = new ListNode(3); cur = cur->next;
        cur->next = new ListNode(4); cur = cur->next;
        cur->next = new ListNode(5); cur = cur->next;
        cur->next = new ListNode(6);

        ListNode *result = implObj->removeElements203(head, 6);
        cout << "Please exam result pointer [" << result->val << "]\n\n";
        return;
    }

    // 204. Count Primes Test
    void countPrimes204Test() {
        cout << "204. Count Primes test starts.\n";
        cout << "10 prime count = [" << implObj->countPrimes204(10) << "]\n\n";
        return;
    }

    // 205. Isomorphic Strings Test
    void isIsomorphic205Test() {
        cout << "205. Isomorphic Strings test starts.\n";
        cout << "paper and title are [" << implObj->isIsomorphic205("paper", "title") 
            << "]\n\n";
        return;
    }

    // 206. Reverse Linked List Test
    void reverseList206Test() {
        cout << "206. Reverse Linked List test starts.\n";
        ListNode * head = new ListNode(1);
        ListNode * cur = head;
        cur->next = new ListNode(2); cur = cur->next;
        cur->next = new ListNode(3); cur = cur->next;
        cur->next = new ListNode(4); cur = cur->next;
        cur->next = new ListNode(5);

        ListNode * result = implObj->reverseList206(head);
        cout << "Please exam result pointer [" << result->val << "]\n\n";
        return;
    }

    // 207. Course Schedule Test
    void canFinish207Test() {
        cout << "207. Course Schedule test starts.\n";
        vector<vector<int>> pre = {
            {0, 1}
        };
        cout << "Can schedule = [" << implObj->canFinish207(2, pre) << "]\n\n";
        return;
    }

    // 208. Implement Trie (Prefix Tree) Test
    void Trie208Test() {
        cout << "208. Implement Trie (Prefix Tree) test starts.\n";

        Session2Impl::Trie208 trie;
        trie.insert("apple");
        cout << "Search apple = [" << trie.search("apple") << "]\n";
        cout << "Search app = [" << trie.search("app") << "]\n";
        cout << "Start with app = [" << trie.startsWith("app") << "]\n";
        trie.insert("app");   
        cout << "Search app = [" << trie.search("app") << "]\n\n";
        return;
    }

    // 209. Minimum Size Subarray Sum Test
    void minSubArrayLen209Test() {
        cout << "209. Minimum Size Subarray Sum test starts.\n";
        vector<int> nums = {2,3,1,2,4,3};
        cout << "Min size = [" << implObj->minSubArrayLen209(7, nums) << "]\n\n";
        return;
    }

    // 210. Course Schedule II Test
    void findOrder210Test() {
        cout << "210. Course Schedule II test starts.\n";
        vector<vector<int>> prerequisites = {
            {1,0},{2,0},{3,1},{3,2}
        };
        vector<int> result = implObj->findOrder210(4, prerequisites);
        cout << "result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 211. Add and Search Word - Data structure design Test
    void WordDictionary211Test() {
        cout << "211. Add and Search Word - Data structure design test starts.\n";
        Session2Impl::WordDictionary211 dict;
        dict.addWord("bad");
        dict.addWord("dad");
        dict.addWord("mad");
        cout << "find pad = [" << dict.search("pad") << "]\n";
        cout << "find bad = [" << dict.search("bad") << "]\n";
        cout << "find .ad = [" << dict.search(".ad") << "]\n";
        cout << "find b.. = [" << dict.search("b..") << "]\n\n";
        return;
    }

    // 212. Word Search II Test
    void findWords212Test() {
        cout << "212. Word Search II test.\n";
        vector<vector<char>> board = {
            {'o', 'a', 'a', 'n'},
            {'e', 't', 'a', 'e'},
            {'i', 'h', 'k', 'r'},
            {'i', 'f', 'l', 'v'}
        };
        vector<string> words = {"oath", "pea", "eat", "rain"};
        vector<string> result = implObj->findWords212(board, words);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "": ", ");
        }
        cout << "]\n\n";
    }

    // 213. House Robber II Test
    void rob213Test() {
        cout << "213. House Robber II test starts.\n";
        vector<int> houses = {2, 3, 2};
        cout << "Max profit = [" << implObj->rob213(houses) << "]\n\n";
    }

    // 214. Shortest Palindrome Test
    void shortestPalindrome214Test() {
        cout << "214. Shortest Palindrome test starts.\n";
        string s = "abcd";
        cout << "Palindrome = [" << implObj->shortestPalindrome214(s) << "]\n\n";
        return;
    }

    // 215. Kth Largest Element in an Array Test
    void findKthLargest215Test() {
        cout << "215. Kth Largest Element in an Array test starts.\n";
        vector<int> nums = {3,2,1,5,6,4};
        cout << "Top 2 = [" << implObj->findKthLargest215(nums, 2) << "]\n\n";
        return;
    }

    // 216. Combination Sum III Test
    void combinationSum3_216Test() {
        cout << "216. Combination Sum III test starts.\n";
        vector<vector<int>> result = implObj->combinationSum3_216(3, 9);
        cout << "Result = [\n";
        for (int i = 0; i < result.size(); ++i) {
            cout << "  [";
            for (int j = 0; j < result[i].size(); ++j) {
                cout << result[i][j] << ((j == result[i].size() - 1) ? "" : ", ");
            }
            cout << "]\n";
        }
        cout << "]\n\n";
    }

    // 217. Contains Duplicate Test
    void containsDuplicate217Test() {
        cout << "217. Contains Duplicate test starts.\n";
        vector<int> nums = {1, 2, 3, 1};
        cout << "Contains duplicate = [" 
            << (implObj->containsDuplicate217(nums) ? "True" : "False") 
            << "]\n\n";
    }

    // 218. The Skyline Problem Test
    void getSkyline218Test() {
        cout << "218. The Skyline Problem test starts.\n";
        vector<vector<int>> buildings = {
            {2, 9, 10}, {3, 7, 15}, {5, 12, 12}, {15, 20, 10}, {19, 24, 8}
        };
        vector<vector<int>> result = implObj->getSkyline218(buildings);
        cout << "Pairs = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << "(" << result[i][0] << ", " << result[i][1] << ")" 
                << (i == (result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 219. Contains Duplicate II Test
    void containsNearbyDuplicate219Test() {
        cout << "219. Contains Duplicate II test starts.\n";
        vector<int> nums = {1, 2, 3, 1};
        cout << "Max distance = 3 will result in [" 
            << (implObj->containsNearbyDuplicate219(nums, 3) ? "True" : "False")
            << "]\n\n";
    }

    // 220. Contains Duplicate III Test
    void containsNearbyAlmostDuplicate220Test() {
        cout << "220. Contains Duplicate III test starts.\n";
        vector<int> nums = {1, 5, 9, 1, 5, 9};
        int k = 2, t = 3;
        bool result = implObj->containsNearbyAlmostDuplicate220(nums, k, t);
        cout << "Max diff be 3 and max distance be 2 will result in ["
            << (result ? "True" : "False") << "]\n\n";
    }

    // 221. Maximal Square Test
    void maximalSquare221Test() {
        cout << "221. Maximal Square test starts.\n";
        vector<vector<char>> matrix = {
            {'1', '0', '1', '0', '0'},
            {'1', '0', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '0', '0', '1', '0'}
        };
        cout << "Max square size = [" << implObj->maximalSquare221(matrix) << "]\n\n";
        return;
    }

    // 222. Count Complete Tree Nodes Test
    void countNodes222Test() {
        cout << "222. Count Complete Tree Nodes test starts.\n";
        TreeNode * root = new TreeNode(1);
        TreeNode * cur = root;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(3);
        cur = root->left;
        cur->left = new TreeNode(4);
        cur->right = new TreeNode(5);
        cur = root->right;
        cur->left = new TreeNode(6);

        cout << "# of nodes = [" << implObj->countNodes222(root) << "]\n\n";
        return;
    }

    // 223. Rectangle Area Test
    void computeArea223Test() {
        cout << "223. Rectangle Area test starts.\n";
        cout << "Example area = [" << implObj->computeArea223(-3, 0, 3, 4, 0, -1, 9, 2)
            << "]\n\n";
        return;
    }

    // 224. Basic Calculator Test
    void calculate224Test() {
        cout << "224. Basic Calculator test starts.\n";
        cout << "(1+(4+5+2)-3)+(6+8) = [" << implObj->calculate224("(1+(4+5+2)-3)+(6+8)") 
            << "]\n\n";
        return;
    }

    // 225. Implement Stack using Queues Test
    void MyStack225Test() {
        cout << "225. Implement Stack using Queues test starts.\n";

        Session2Impl::MyStack225 myStack;
        myStack.push(1);
        myStack.push(2);  
        cout << "top() = " << myStack.top() << "; ";   // returns 2
        cout << "pop() = " << myStack.pop() << "; ";   // returns 2
        cout << "empty() = " << myStack.empty() << "\n\n"; // returns false
        return;
    }

    // 226. Invert Binary Tree Test
    void invertTree226Test() {
        cout << "226. Invert Binary Tree test starts.\n";
        TreeNode * root = new TreeNode(4);
        TreeNode * cur = root;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(7);
        cur = root->left;
        cur->left = new TreeNode(1);
        cur->right = new TreeNode(3);
        cur = root->right;
        cur->left = new TreeNode(6);
        cur->right = new TreeNode(9);

        TreeNode * result = implObj->invertTree226(root);
        cout << "Please exam result " << result->val << "\n\n";
        return;
    }

    // 227. Basic Calculator II Test
    void calculate227Test() {
        cout << "227. Basic Calculator II test starts.\n";
        cout << "3+5 / 2 = " << implObj->calculate227("3+5 / 2") << "\n\n";
        return;
    }

    // 228. Summary Ranges Test
    void summaryRanges228Test() {
        cout << "228. Summary Ranges test starts.\n";
        vector<int> nums = {0,2,3,4,6,8,9};
        vector<string> result = implObj->summaryRanges228(nums);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 229. Majority Element II Test
    void majorityElement229Test() {
        cout << "229. Majority Element II test starts.\n";
        vector<int> nums = {1,1,1,3,3,2,2,2};
        vector<int> major = implObj->majorityElement229(nums);
        cout << "Result = [";
        for (int i = 0; i < major.size(); ++i) {
            cout << major[i] << ((i == major.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 230. Kth Smallest Element in a BST Test
    void kthSmallest230Test() {
        cout << "230. Kth Smallest Element in a BST test starts.\n";
        TreeNode * root = new TreeNode(5);
        TreeNode * cur = root;
        cur->left = new TreeNode(3);
        cur->right = new TreeNode(6);
        cur = root->left;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(4);

        cout << "Kth smallest elem = [" << implObj->kthSmallest230(root, 2) << "]\n\n";
        return;
    }

    // 231. Power of Two Test
    void isPowerOfTwo231Test() {
        cout << "231. Power of Two test starts.\n";
        cout << "8 is power of 2 = [" << implObj->isPowerOfTwo231(8) << "]\n\n";
    }

    // 232. Implement Queue using Stacks Test
    void MyQueue232Test() {
        cout << "232. Implement Queue using Stacks test starts.\n";

        Session2Impl::MyQueue232 myQ;
        myQ.push(1);
        myQ.push(2); 
        cout << "peek = [" << myQ.peek() << "]\n";  // returns 1
        cout << "pop = [" << myQ.pop() << "]\n";   // returns 1
        cout << "empty = [" << myQ.empty() << "]\n\n"; // returns false 
        return;
    }

    // 233. Number of Digit One Test
    void countDigitOne233Test() {
        cout << "233. Number of Digit One test starts.\n";
        cout << "13 has ones = [" << implObj->countDigitOne233(13) << "]\n\n";
        return;
    }

    // 234. Palindrome Linked List Test
    void isPalindrome234Test() {
        cout << "234. Palindrome Linked List test starts.\n";
        ListNode * head = new ListNode(1);
        ListNode * cur = head;
        cur->next = new ListNode(2); cur = cur->next;
        cur->next = new ListNode(2); cur = cur->next;
        cur->next = new ListNode(1);

        cout << "Is palindrome = [" << implObj->isPalindrome234(head) << "]\n\n";
        return;
    }

    // 235. Lowest Common Ancestor of a Binary Search Tree Test
    void lowestCommonAncestor235Test() {
        cout << "235. Lowest Common Ancestor of a Binary Search Tree test starts.\n";
        TreeNode * root = new TreeNode(6);
        TreeNode * cur = root;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(8);

        cur = root->left;
        cur->left = new TreeNode(0);
        cur->right = new TreeNode(4);
        
        cur = cur->right;
        cur->left = new TreeNode(3);
        TreeNode * p = cur->left;
        cur->right = new TreeNode(5);
        TreeNode * q = cur->right;

        cur = root->right;
        cur->left = new TreeNode(7);
        cur->right = new TreeNode(9);

        cout << "Common ancester of <3, 5> is [" 
            << implObj->lowestCommonAncestor235(root, p, q)->val << "]\n\n";
        return;
    }

    // 236. Lowest Common Ancestor of a Binary Tree Test
    void lowestCommonAncestor236Test() {
        cout << "236. Lowest Common Ancestor of a Binary Tree test starts.\n";
        TreeNode * root = new TreeNode(3);
        TreeNode * cur = root;
        cur->left = new TreeNode(5);
        TreeNode * p = cur->left;
        cur->right = new TreeNode(1);

        cur = root->left;
        cur->left = new TreeNode(6);
        cur->right = new TreeNode(2);

        cur = cur->right;
        cur->left = new TreeNode(7);
        cur->right = new TreeNode(4);
        TreeNode * q = cur->right;

        cur = root->right;
        cur->left = new TreeNode(0);
        cur->right = new TreeNode(8);

        cout << "Common ancester of <5, 4> is [" 
            << implObj->lowestCommonAncestor236(root, p, q)->val << "]\n\n";
        return;
    }

    // 237. Delete Node in a Linked List Test
    void deleteNode237Test() {
        cout << "237. Delete Node in a Linked List test starts.\n";
        ListNode * head = new ListNode(4);
        ListNode * cur = head;
        cur->next = new ListNode(5); cur = cur->next;
        ListNode * toDelete = cur;
        cur->next = new ListNode(1); cur = cur->next;
        cur->next = new ListNode(9);
        implObj->deleteNode237(toDelete);
        cout << "Please exam head linked list to see whether delete successfully";
    }

    // 238. Product of Array Except Self Test
    void productExceptSelf238Test() {
        cout << "238. Product of Array Except Self test starts.\n";
        vector<int> nums = {1,2,3,4};
        vector<int> result = implObj->productExceptSelf238(nums);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 239. Sliding Window Maximum Test
    void maxSlidingWindow239Test() {
        cout << "239. Sliding Window Maximum test starts.\n";
        vector<int> nums = {1,3,-1,-3,5,3,6,7};
        vector<int> result = implObj->maxSlidingWindow239(nums, 3);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 240. Search a 2D Matrix II Test
    void searchMatrix240Test() {
        cout << "240. Search a 2D Matrix II test starts.\n";
        vector<vector<int>> matrix = {
            {1, 4, 7, 11, 15},
            {2, 5, 8, 12, 19},
            {3, 6, 9, 16, 22},
            {10, 13, 14, 17, 24},
            {18, 21, 23, 26, 30}
        };
        cout << "Find 5 = [" << implObj->searchMatrix240(matrix, 5) << "]\n";
        cout << "Find 20 = [" << implObj->searchMatrix240(matrix, 20) << "]\n\n";
        return;
    }

    // 241. Different Ways to Add Parentheses Test
    void diffWaysToCompute241Test() {
        cout << "241. Different Ways to Add Parentheses test starts.\n";
        cout << "2*3-4*5 = [";
        vector<int> result = implObj->diffWaysToCompute241("2*3-4*5");
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 242. Valid Anagram Test
    void isAnagram242Test() {
        cout << "242. Valid Anagram test starts.\n";
        cout << "anagram and nagaram = [" 
            << (implObj->isAnagram242("anagram", "nagaram") ? "True" : "False")
            << "]\n\n";
        return;
    }

    // 243. Shortest Word Distance Test
    void shortestDistance243Test() {
        cout << "243. Shortest Word Distance test starts.\n";
        vector<string> words = {
            "practice", "makes", "perfect", "coding", "makes"
        };
        cout << "Distance = [" << implObj->shortestDistance243(words, "coding", "practice")
            << "]\n\n";
        return;
    }

    // 244. Shortest Word Distance II Test
    void WordDistance244Test() {
        cout << "244. Shortest Word Distance II test starts.\n";
        vector<string> strVec = {
            "practice", "makes", "perfect", "coding", "makes"
        };
        Session2Impl::WordDistance244 dist(strVec);
        cout << "Min Distance between coding and makes = [" << dist.shortest("coding", "makes")
            << "]\n\n";
        return;
    }

    // 245. Shortest Word Distance III Test
    void shortestWordDistance245Test() {
        cout << "245. Shortest Word Distance III test starts.\n";
        vector<string> words = {
            "practice", "makes", "perfect", "coding", "makes"};
        cout << "Shortest distance = [" 
            << implObj->shortestWordDistance245(words, "makes", "makes") 
            << "]\n\n";
    }

    // 246. Strobogrammatic Number Test
    void isStrobogrammatic246Test() {
        cout << "246. Strobogrammatic Number test starts.";
        bool result = implObj->isStrobogrammatic246("689");
        cout << "689 is Strobogrammatic = [" << (result ? "True" : "False") 
            << "]\n\n";
    }

    // 247. Strobogrammatic Number II Test
    void findStrobogrammatic247Test() {
        cout << "247. Strobogrammatic Number II test starts.\n";
        vector<string> result = implObj->findStrobogrammatic247(3);

        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << (i == (result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 248. Strobogrammatic Number III Test
    void strobogrammaticInRange248Test() {
        cout << "248. Strobogrammatic Number III test starts.\n";
        int result = implObj->strobogrammaticInRange248("100", "500");
        cout << "[100, 500] has strobogrammatic = [" << result << "]\n\n";
    }

    // 249. Group Shifted Strings Test
    void groupStrings249Test() {
        cout << "249. Group Shifted Strings test starts.\n";
        vector<string> strings = {
            "abc", "bcd", "acef", "xyz", "az", "ba", "a", "z"
        };
        vector<vector<string>> groups = implObj->groupStrings249(strings);
        cout << "Result = [\n";
        for (int i = 0; i < groups.size(); ++i) {
            cout << "  [";
            for (int j = 0; j < groups[i].size(); ++j) {
                cout << groups[i][j] << ((j == groups[i].size() - 1) ? "" : ", ");
            }
            cout << "]" << ((i == groups.size() - 1) ? "" : ",") << "\n";
        }
        cout << "]\n\n";
    }

    // 250. Count Univalue Subtrees Test
    void countUnivalSubtrees250Test() {
        cout << "250. Count Univalue Subtrees test starts.\n";
        TreeNode * root = new TreeNode(5);
        TreeNode * cur = root;
        cur->left = new TreeNode(1);
        cur->right = new TreeNode(5);

        cur = root->left;
        cur->left = new TreeNode(5);
        cur->right = new TreeNode(5);

        cur = root->right;
        cur->right = new TreeNode(5);
        cout << "# of unival substrees = [" << implObj->countUnivalSubtrees250(root) 
            << "]\n\n";
        return;
    }

    // 251. Flatten 2D Vector Test
    void Vector2D251Test() {
        cout << "251. Flatten 2D Vector test starts.\n";
        vector<vector<int>> vec = {
            {1, 2}, {3}, {4}
        };

        Session2Impl::Vector2D251 vec2d(vec);
        cout << "Next = [" << vec2d.next() << "]\n";
        cout << "Next = [" << vec2d.next() << "]\n";
        cout << "Next = [" << vec2d.next() << "]\n";
        cout << "hasNext = [" << vec2d.hasNext() << "]\n";
        cout << "Next = [" << vec2d.next() << "]\n";
        cout << "hasNext = [" << vec2d.hasNext() << "]\n\n";
        return;
    }

    // 252. Meeting Rooms Test
    void canAttendMeetings252Test() {
        cout << "252. Meeting Rooms test starts.\n";
        vector<vector<int>> meeting = {
            {0, 30}, {5, 10}, {15, 20}
        };
        cout << "Can meeting = [" << implObj->canAttendMeetings252(meeting) << "]\n\n";
        return;
    }

    // 253. Meeting Rooms II Test
    void minMeetingRooms253Test() {
        cout << "253. Meeting Rooms II test starts.\n";
        vector<vector<int>> intervals = {
            {0, 30}, {5, 10}, {15, 20}
        };
        cout << "Number of rooms = [" << implObj->minMeetingRooms253(intervals) << "]\n\n";
        return;
    }

    // 254. Factor Combinations Test
    void getFactors254Test() {
        cout << "254. Factor Combinations test starts.\n";
        vector<vector<int>> results = implObj->getFactors254(32);
        cout << "32 will generate result = [\n";
        for (int i = 0; i < results.size(); ++i) {
            cout << "  [";
            for (int j = 0; j < results[i].size(); ++j) {
                cout << results[i][j] << ((j == results[i].size() - 1) ? "" : ", ");
            }
            cout << "]" << ((i == results.size() - 1) ? "" : ",") << "\n";
        }
        cout << "]\n\n";
    }

    // 255. Verify Preorder Sequence in Binary Search Tree Test
    void verifyPreorder255Test() {
        cout << "255. Verify Preorder Sequence in Binary Search Tree test starts.\n";
        vector<int> preorder = {5, 2, 1, 3, 6};
        cout << "[5,2,1,3,6] can generate BST = [" 
            << (implObj->verifyPreorder255(preorder) ? "True" : "False")
            << "]\n\n";
        return;
    }

    // 256. Paint House Test
    void minCost256Test() {
        cout << "256. Paint House test starts.\n";
        vector<vector<int>> costs = {{17,2,17},{16,16,5},{14,3,19}};
        cout << "Min cost = [" << implObj->minCost256(costs) << "]\n\n";
        return;
    }

    // 257. Binary Tree Paths Test
    void binaryTreePaths257Test() {
        cout << "257. Binary Tree Paths test starts.\n";
        TreeNode * root = new TreeNode(1);
        TreeNode * cur = root;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(3);
        cur->left->right = new TreeNode(5);

        vector<string> result = implObj->binaryTreePaths257(root);
        cout << "All paths = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 258. Add Digits Test
    void addDigits258Test() {
        cout << "258. Add Digits test starts.\n";
        cout << "38 will generate [" << implObj->addDigits258(38) << "]\n\n";
    }

    // 259. 3Sum Smaller Test
    void threeSumSmaller259Test() {
        cout << "259. 3Sum Smaller test starts.\n";
        vector<int> nums = {-2, 0, 1, 3};
        int result = implObj->threeSumSmaller259(nums, 2);
        cout << "# of triplets = [" << result << "]\n\n";
    }

    // 260. Single Number III Test
    void singleNumber260Test() {
        cout << "260. Single Number III test starts.\n";
        vector<int> nums = {1, 2, 1, 3, 2, 5};
        vector<int> result = implObj->singleNumber260(nums);
        cout << "Two single numbers = [" << nums[0] << ", " << nums[1] << "]\n\n";
    }

    // 261. Graph Valid Tree Test
    void validTree261Test() {
        cout << "261. Graph Valid Tree test starts.\n";
        vector<vector<int>> edges = {
            {0,1}, {0,2}, {0,3}, {1,4}
        };
        cout << "Is tree = [" 
            << (implObj->validTree261(5, edges) ? "True" : "False") << "]\n\n";
    }

    // 263. Ugly Number Test
    void isUgly263Test() {
        cout << "263. Ugly Number test starts.\n";
        cout << "36 is Ugly = [" << (implObj->isUgly263(36) ? "True" : "False")
            << "]\n\n";
    }

    // 264. Ugly Number II Test
    void nthUglyNumber264Test() {
        cout << "264. Ugly Number II test starts.\n";
        cout << "7-th Ugly Number = [" << implObj->nthUglyNumber264(7) << "]\n\n";
    }

    // 265. Paint House II Test
    void minCostII265Test() {
        cout << "265. Paint House II test starts.\n";
        vector<vector<int>> costs = {{1, 5, 3}, {2, 9, 4}};
        int result = implObj->minCostII265(costs);
        cout << "Minimal costs = [" << result << "]\n\n";
    }

    // 266. Palindrome Permutation Test
    void canPermutePalindrome266Test() {
        cout << "266. Palindrome Permutation test starts.\n";
        cout << "'Code' can generate palindrome = [" 
            << (implObj->canPermutePalindrome266("code") ? "True" : "False")
            << "]\n\n";
    }

    // 267. Palindrome Permutation II Test
    void generatePalindromes267Test() {
        cout << "267. Palindrome Permutation II test starts.\n";
        vector<string> result = implObj->generatePalindromes267("aabbc");
        cout << "Results = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 268. Missing Number Test
    void missingNumber268Test() {
        cout << "268. Missing Number test.\n";
        vector<int> nums = {9,6,4,2,3,5,7,0,1};
        cout << "Missing number = [" << implObj->missingNumber268(nums) << "]\n\n";
        return;
    }

    // 269. Alien Dictionary Test
    void alienOrder269Test() {
        cout << "269. Alien Dictionary test starts.\n";
        vector<string> words = {"wrt", "wrf", "er", "ett", "rftt"};
        cout << "Order = [" << implObj->alienOrder269(words) << "]\n\n";
        return;
    }

    // 270. Closest Binary Search Tree Value Test
    void closestValue270Test() {
        cout << "270. Closest Binary Search Tree Value test starts.\n";
        TreeNode * root = new TreeNode(4);
        TreeNode * cur = root;
        cur->left = new TreeNode(2); cur->right = new TreeNode(5);
        cur = cur->left;
        cur->left = new TreeNode(1); cur->right = new TreeNode(3);
        int result = implObj->closestValue270(root, 3.714286);
        cout << "Close node value to 3.714286 is [" << result << "]\n\n";
    }

    // 271. Encode and Decode Strings Test
    void encodeDecode271Test() {
        cout << "271. Encode and Decode Strings test starts.\n";
        vector<string> str_arr = {"a", "ab", "abc"};
        string encode = implObj->encode271(str_arr);
        cout << "encode = [" << encode << "]\n";
        vector<string> str_decode = implObj->decode271(encode);
        cout << "decode = [";
        for (int i = 0; i < str_decode.size(); ++i) {
            cout << str_decode[i] << ((i == str_decode.size() - 1) ? "" : "; ");
        }
        cout << "]\n\n";
        return;
    }

    // 272. Closest Binary Search Tree Value II Test
    void closestKValues272Test() {
        cout << "272. Closest Binary Search Tree Value II test starts.\n";
        TreeNode * root = new TreeNode(4);
        TreeNode * cur = root;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(5);

        cur = root->left;
        cur->left = new TreeNode(1);
        cur->right = new TreeNode(3);

        vector<int> result = implObj->closestKValues272(root, 3.714286, 2);
        cout << "k values = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 273. Integer to English Words Test
    void numberToWords273Test() {
        cout << "273. Integer to English Words test starts.\n";
        cout << "123 = [" << implObj->numberToWords273(123) << "]\n";
        cout << "12345 = [" << implObj->numberToWords273(12345) << "]\n";
        cout << "12134567 = [" << implObj->numberToWords273(12134567) << "]\n\n";
    }

    // 274. H-Index Test
    void hIndex274Test() {
        cout << "274. H-Index test starts.\n";
        vector<int> citations = {3, 0, 6, 1, 5};
        cout << "h idx = [" << implObj->hIndex274(citations) << "]\n\n";
    }

    // 275. H-Index II Test
    void hIndex275Test() {
        cout << "275. H-Index II test starts.\n";
        vector<int> citations = {0, 1, 3, 5, 6, 7};
        int result = implObj->hIndex275(citations);
        cout << "{0, 1, 3, 5, 6, 7} has h index = [" << result << "]\n\n";
    }

    // 276. Paint Fence Test
    void numWays276Test() {
        cout << "276. Paint Fence test starts.\n";
        int result = implObj->numWays276(3, 3);
        cout << "(n = 3, k = 3) will result in [" << result << "]\n\n";
    }

    // 277. Find the Celebrity Test
    void findCelebrity277Test() {
        cout << "277. Find the Celebrity test starts.\n";
        cout << "Result = [" << implObj->findCelebrity277(3) << "]\n\n";
    }

    // 278. First Bad Version Test
    void firstBadVersion278Test() {
        cout << "278. First Bad Version test starts.\n";
        cout << "First bad version = [" << implObj->firstBadVersion278(7) << "]\n\n";
    }

    // 279. Perfect Squares Test
    void numSquares279Test() {
        cout << "279. Perfect Squares test starts.\n";
        cout << "Min number of perfect squares [" << implObj->numSquares279(13) << "]\n\n";
        return;
    }

    // 280. Wiggle Sort Test
    void wiggleSort280Test() {
        cout << "280. Wiggle Sort test starts.\n";
        vector<int> nums = {3, 5, 2, 1, 6, 4};
        implObj->wiggleSort280(nums);

        cout << "Result = [";
        for (int i = 0; i < nums.size(); ++i) {
            cout << nums[i] << ((i == nums.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 281. Zigzag Iterator Test
    void ZigzagIterator281Test() {
        cout << "281. Zigzag Iterator test starts.\n";
        vector<int> v1 = {1,2};
        vector<int> v2 = {3,4,5};
        Session2Impl::ZigzagIterator281 zigzagIter(v1, v2);
        cout << "Start to print next until end \n";
        while (zigzagIter.hasNext()) {
            cout << "Next = [" <<  zigzagIter.next() << "]\n";
        }
        cout << "End of printing.\n\n";
    }

    // 282. Expression Add Operators Test
    void addOperators282Test() {
        cout << "282. Expression Add Operators test starts.\n";
        string num = "105";
        int target = 5;
        vector<string> result = implObj->addOperators282(num, target);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << "\"" << result[i] << "\"" << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 283. Move Zeroes Test
    void moveZeroes283Test() {
        cout << "283. Move Zeroes test starts.\n";
        vector<int> nums = {0, 1, 0, 3, 12};
        implObj->moveZeroes283(nums);
        cout << "Result = [";
        for (int i = 0; i < nums.size(); ++i) {
            cout << nums[i] << ((i == nums.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 284. Peeking Iterator Test
    void PeekingIterator284Test() {
        cout << "284. Peeking Iterator test starts.\n";
        Session2Impl::PeekingIterator284 iter(vector<int>({1, 2, 3}));
        cout << "next = [" << iter.next() << "]\n";
        cout << "peek = [" << iter.peek() << "]\n";
        cout << "next = [" << iter.next() << "]\n";
        cout << "next = [" << iter.next() << "]\n";
        cout << "has_next = [" << (iter.hasNext() ? "True" : "False") << "]\n\n";
        return;
    }

    // 285. Inorder Successor in BST Test
    void inorderSuccessor285Test() {
        cout << "285. Inorder Successor in BST test starts.\n";
        TreeNode* root = new TreeNode(2);
        root->left = new TreeNode(1);  root->right = new TreeNode(3);
        cout << "Next to 1 is [" << 
            implObj->inorderSuccessor285(root, root->left)->val << "]\n\n";
    }

    // 286. Walls and Gates Test
    void wallsAndGates286Test() {
        cout << "286. Walls and Gates test starts.\n";
        vector<vector<int>> nums = {
            {INT_MAX, -1, 0, INT_MAX},
            {INT_MAX, INT_MAX, INT_MAX, -1},
            {INT_MAX, -1, INT_MAX, -1},
            {0, -1, INT_MAX, INT_MAX}
        };
        implObj->wallsAndGates286(nums);
        cout << "Result = [\n";
        for (int i = 0; i < nums.size(); ++i) {
            cout << "  [";
            for (int j = 0; j < nums[i].size(); ++j) {
                cout << nums[i][j] << ((j == nums[i].size() - 1) ? "" : ", ");
            }
            cout << "]\n";
        }
        cout << "].\n\n";
    }

    // 287. Find the Duplicate Number Test
    void findDuplicate287Test() {
        cout << "287. Find the Duplicate Number test starts.\n";
        vector<int> nums = {1, 3, 4, 2, 2};
        cout << "Duplicate = [" << implObj->findDuplicate287(nums) << "]\n\n";
    }

    // 288. Unique Word Abbreviation Test
    void ValidWordAbbr288Test() {
        cout << "288. Unique Word Abbreviation test starts.\n";
        vector<string> dict = {"deer", "door", "cake", "card"};
        Session2Impl::ValidWordAbbr288 abbr(dict);
        cout << "isUnique(dear) = [" << (abbr.isUnique("dear") ? "True" : "False") 
            << "]\n";
        cout << "isUnique(cart) = [" << (abbr.isUnique("cart") ? "True" : "False") 
            << "]\n";
        cout << "isUnique(cane) = [" << (abbr.isUnique("cane") ? "True" : "False") 
            << "]\n";
        cout << "isUnique(make) = [" << (abbr.isUnique("make") ? "True" : "False") 
            << "]\n\n";
    }

    // 289. Game of Life Test
    void gameOfLife289Test() {
        cout << "289. Game of Life test starts.\n";
        vector<vector<int>> nums = {
            {0, 1, 0},
            {0, 0, 1},
            {1, 1, 1},
            {0, 0, 0}
        };

        implObj->gameOfLife289(nums);

        cout << "Result = [\n";
        for (int i = 0; i < nums.size(); ++i) {
            cout << "  [";
            for (int j = 0; j < nums[0].size(); ++j) {
                cout << nums[i][j] << ((j == nums[0].size() - 1) ? "" : ", ");
            }
            cout << "]\n";
        }
        cout << "]\n\n";
    }

    // 290. Word Pattern Test
    void wordPattern290Test() {
        cout << "290. Word Pattern test starts.\n";
        string pattern = "abba", str = "dog cat cat dog";
        bool result = implObj->wordPattern290(pattern, str);
        cout << "[abba] with [dog cat cat dog] is [" << (result ? "True" : "False")
            << "]\n\n";
    }

    // 291. Word Pattern II Test
    void wordPatternMatch291Test() {
        cout << "291. Word Pattern II test starts.\n";
        string pattern = "abab", str = "redblueredblue";
        cout << "isMatch = [" << implObj->wordPatternMatch291(pattern, str) << "]\n\n";
    }

    // 292. Nim Game Test
    void canWinNim292Test() {
        cout << "292. Nim Game test starts.\n";
        cout << "5 Can win = [" << (implObj->canWinNim292(5) ? "True" : "False")
            << "]\n\n";
    }

    // 293. Flip Game Test
    void generatePossibleNextMoves293Test() {
        cout << "293. Flip Game test starts.\n";
        vector<string> result = implObj->generatePossibleNextMoves293("++++");
        cout << "Possible next move is [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }
    
    // 294. Flip Game II Test
    void canWin294Test() {
        cout << "294. Flip Game II test starts.\n";
        bool result = implObj->canWin294("++++");
        cout << "++++ will result in [" << (result ? "True" : "False") << "]\n\n";
    }

    // 295. Find Median from Data Stream Test
    void MedianFinder295Test() {
        cout << "295. Find Median from Data Stream test starts.\n";
        Session2Impl::MedianFinder295 finder;
        finder.addNum(1);
        cout << "median = [" << finder.findMedian() << "]\n";
        finder.addNum(2);
        cout << "median = [" << finder.findMedian() << "]\n";
        finder.addNum(3);
        cout << "median = [" << finder.findMedian() << "]\n\n";
        return;
    }

    // 296. Best Meeting Point Test
    void minTotalDistance296Test() {
        cout << "296. Best Meeting Point test starts.\n";
        vector<vector<int>> matrix = {
            {1, 0, 0, 0, 1},
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0}
        };

        cout << "Min total dist = [" << implObj->minTotalDistance296(matrix) << "]\n\n";
        return;
    }

    // 297. Serialize and Deserialize Binary Tree Test
    void Codec297Test() {
        cout << "297. Serialize and Deserialize Binary Tree test.\n";
        Session2Impl::Codec297 implObj;
        TreeNode * root = new TreeNode(1);
        TreeNode * cur = root;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(3);

        cur = cur->right;
        cur->left = new TreeNode(4);
        cur->right = new TreeNode(5);

        string code = implObj.serialize(root);
        cout << "Serialize result = [" << code << "].\n";
        TreeNode * result = implObj.deserialize(code);
        cout << "Please exam result = [" << result->val << "]\n\n";
        return;
    }

    // 298. Binary Tree Longest Consecutive Sequence Test
    void longestConsecutive298Test() {
        cout << "298. Binary Tree Longest Consecutive Sequence test starts.\n";
        TreeNode *root = new TreeNode(1);
        TreeNode *cur = root;
        cur->right = new TreeNode(3);
        cur = cur->right;
        cur->left = new TreeNode(2); cur->right = new TreeNode(4);
        cur = cur->right; cur->right = new TreeNode(5);

        int result = implObj->longestConsecutive298(root);
        cout << "Longest consecutive sequence length = [" << result << "]\n\n";
    }

    // 299. Bulls and Cows Test
    void getHint299Test() {
        cout << "299. Bulls and Cows test starts.\n";
        string result = implObj->getHint299("1807", "7810");
        cout << "'1807' and '7810' will generate [" << result << "]\n\n";
    }

    // 300. Longest Increasing Subsequence Test
    void lengthOfLIS300Test() {
        cout << "300. Longest Increasing Subsequence test starts.\n";
        vector<int> nums({10,9,2,5,3,7,101,18});
        cout << "Longest # = [" << implObj->lengthOfLIS300(nums) << "]\n\n";
        return;
    }

private:
    Session2Impl * implObj;
};

#endif