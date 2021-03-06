#ifndef _SESSION_5_TEST_H
#define _SESSION_5_TEST_H

#include "session5_impl.h"

class Session5Test {
public:
    Session5Test() {
        cout << "Test object for Leetcode Session 5 problems constructed.\n";
        implObj = new Session5Impl();
    }

    // 503. Next Greater Element II Test
    void nextGreaterElements503Test() {
        cout << "503. Next Greater Element II test starts.\n";
        vector<int> nums = {1, 2, 1};
        vector<int> result = implObj->nextGreaterElements503(nums);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 505. The Maze II Test
    void shortestDistance505Test() {
        cout << "505. The Maze II test starts.\n";
        vector<vector<int>> maze = {
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0},
            {1, 1, 0, 1, 1},
            {0, 0, 0, 0, 0}
        };
        vector<int> start = {0, 4};
        vector<int> end = {4, 4};

        cout << "Shortest distance = [" << implObj->shortestDistance505(maze, start, end)
            << "]\n\n";
    }

    // 508. Most Frequent Subtree Sum Test
    void findFrequentTreeSum508Test() {
        cout << "508. Most Frequent Subtree Sum test starts.\n";
        TreeNode* root = new TreeNode(5);
        root->left = new TreeNode(2);
        root->right = new TreeNode(-3);
        vector<int> result = implObj->findFrequentTreeSum508(root);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 509. Fibonacci Number Test
    void fib509Test() {
        cout << "509. Fibonacci Number test starts.\n";
        cout << "N = 10 => Sum = [" << implObj->fib509(10) << "]\n\n";
        return;
    }

    // 510. Inorder Successor in BST II Test
    void inorderSuccessor510Test() {
        cout << "510. Inorder Successor in BST II test starts.\n";
        Node510 * root;
        root->val = 2;
        root->left = new Node510();
        root->left->val = 1;
        root->left->parent = root;
        root->right = new Node510();
        root->right->val = 3;
        root->right->parent = root;

        cout << "1 next large is [" << implObj->inorderSuccessor510(root->left)->val << "]\n";
        cout << "2 next large is [" << implObj->inorderSuccessor510(root)->val << "]\n\n";
    }

    // 513. Find Bottom Left Tree Value Test
    void findBottomLeftValue513Test() {
        cout << "513. Find Bottom Left Tree Value test starts.\n";
        TreeNode* root = new TreeNode(2);
        root->left = new TreeNode(1);
        root->right = new TreeNode(3);

        cout << "Left most node value in the last row = [" 
            << implObj->findBottomLeftValue513(root) << "]\n\n";
        return;
    }

    // 514. Freedom Trail Test
    void findRotateSteps514Test() {
        cout << "514. Freedom Trail test starts.\n";
        cout << "ring = godding, key = gd => steps = [" 
            << implObj->findRotateSteps514("godding", "gd") << "]\n\n";
        return;
    }

    // 515. Find Largest Value in Each Tree Row Test
    void largestValues515Test() {
        cout << "515. Find Largest Value in Each Tree Row test starts.\n";
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(3);
        root->right = new TreeNode(2);

        TreeNode* cur = root->left;
        cur->left = new TreeNode(5);
        cur->right = new TreeNode(3);

        cur = root->right;
        cur->right = new TreeNode(9);
        vector<int> result = implObj->largestValues515(root);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 516. Longest Palindromic Subsequence Test
    void longestPalindromeSubseq516Test() {
        cout << "516. Longest Palindromic Subsequence test starts.\n";
        cout << "Longest palindromic subsequence of bbbab = [" 
            << implObj->longestPalindromeSubseq516("bbbab") << "]\n\n";
        return;
    }

    // 517. Super Washing Machines Test
    void findMinMoves517Test() {
        cout << "517. Super Washing Machines test starts.\n";
        vector<int> machines = {0, 0, 11, 5};
        cout << "Minimum Number of moves = [" << implObj->findMinMoves517(machines) << "]\n\n";
        return;
    }

    // 518. Coin Change 2 Test
    void change518Test() {
        cout << "518. Coin Change 2 test starts.\n";
        vector<int> coins = {1, 2 ,5};
        cout << "# of ways to reach 5 = [" << implObj->change518(5, coins) << "]\n\n";
        return;
    }

    // 519. Random Flip Matrix Test
    void Solution519Test() {
        cout << "519. Random Flip Matrix test starts.\n";
        Session5Impl::Solution519 sol(2, 3);
        vector<int> flip1 = sol.flip();
        cout << "Flip 1 = [" << flip1[0] << ", " << flip1[1] << "]\n";
        vector<int> flip2 = sol.flip();
        cout << "Flip 1 = [" << flip2[0] << ", " << flip2[1] << "]\n";
        vector<int> flip3 = sol.flip();
        cout << "Flip 1 = [" << flip3[0] << ", " << flip3[1] << "]\n\n";
        sol.reset();
    }

    // 523. Continuous Subarray Sum Test
    void checkSubarraySum523Test() {
        cout << "523. Continuous Subarray Sum test starts.\n";
        vector<int> nums = {23, 2, 6, 4, 7};
        int k = 6;
        cout << "Can get subarray sum = [" << implObj->checkSubarraySum523(nums, k) << "]\n\n";
        return;
    }

    // 524. Longest Word in Dictionary through Deleting Test
    void findLongestWord524Test() {
        cout << "524. Longest Word in Dictionary through Deleting test starts.\n";
        string s = "abpcplea";
        vector<string> d = {"ale", "apple", "monkey", "plea"};
        cout << "Longest word = [" << implObj->findLongestWord524(s, d) << "]\n\n";
        return;
    }

    // 525. Contiguous Array Test
    void findMaxLength525Test() {
        cout << "525. Contiguous Array test starts.\n";
        vector<int> nums = {0, 1, 0};
        cout << "Max Length = [" << implObj->findMaxLength525(nums) << "]\n\n";
        return;
    }

    // 526. Beautiful Arrangement Test
    void countArrangement526Test() {
        cout << "526. Beautiful Arrangement test starts.\n";
        cout << "N = 2; countArrangement = [" << implObj->countArrangement526(2) << "]\n\n";
        return;
    }

    // 527. Word Abbreviation Test
    void wordsAbbreviation527Test() {
        cout << "527. Word Abbreviation test starts.\n";
        vector<string> dict = {
            "like", "god", "internal", "me", "internet", 
            "interval", "intension", "face", "intrusion"
        };
        vector<string> result = implObj->wordsAbbreviation527(dict);
        cout << "Result = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 528. Random Pick with Weight Test
    void Solution528Test() {
        cout << "528. Random Pick with Weight test starts.\n";
        vector<int> w = {1, 3};
        Session5Impl::Solution528 obj(w);
        cout << "Result = [";
        for (int i = 0; i < 10; ++i) {
            cout << obj.pickIndex() << ((i == 9) ? "" : ", ");
        }
        cout << "]\n\n";
        return;
    }

    // 529. Minesweeper Test
    void updateBoard529Test() {
        cout << "529. Minesweeper test starts.\n";
        vector<vector<char>> board = {
            {'E', 'E', 'E', 'E', 'E'},
            {'E', 'E', 'M', 'E', 'E'},
            {'E', 'E', 'E', 'E', 'E'},
            {'E', 'E', 'E', 'E', 'E'}
        };

        vector<int> click = {3, 0};
        vector<vector<char>> result = implObj->updateBoard529(board, click);

        cout << "Result = [\n";
        for (int i = 0; i < result.size(); ++i) {
            cout << "  [";
            for (int j = 0; j < result[0].size(); ++j) {
                cout << result[i][j] << ((j == result[0].size() - 1) ? "" : ", ");
            }
            cout << "]\n";
        }
        cout << "]\n\n";
        return;
    }

    // 530. Minimum Absolute Difference in BST Test
    void getMinimumDifference530Test() {
        cout << "530. Minimum Absolute Difference in BST test starts.\n";
        TreeNode* root = new TreeNode(1);
        root->right = new TreeNode(3);
        root->right->left = new TreeNode(2);

        cout << "Min Abs Diff = [" << implObj->getMinimumDifference530(root) << "]\n\n";
        return;
    }

    // 531. Lonely Pixel I Test
    void findLonelyPixel531Test() {
        cout << "531. Lonely Pixel I test starts.\n";
        vector<vector<char>> picture = {
            {'W', 'W', 'B'},
            {'W', 'B', 'W'},
            {'B', 'W', 'W'}
        };

        cout << "Number of lonely pixel = [" << implObj->findLonelyPixel531(picture) << "]\n\n";
        return;
    }

    // 536. Construct Binary Tree from String Test
    void str2tree536Test() {
        cout << "536. Construct Binary Tree from String test starts.\n";
        TreeNode* result = implObj->str2tree536("4(2(3)(1))(6(5))");
        cout << "4(2(3)(1))(6(5)) will generate root = [" << result->val << "]\n\n";
        return;
    }

    // 538. Convert BST to Greater Tree Test
    void convertBST538Test() {
        cout << "538. Convert BST to Greater Tree test starts.\n";
        TreeNode * root = new TreeNode(5);
        root->left = new TreeNode(2);
        root->right = new TreeNode(13);
        TreeNode * result = implObj->convertBST538(root);
        cout << "BST Greater root = [" << result->val << "]\n\n";
        return;
    }

    // 539. Minimum Time Difference Test
    void findMinDifference539Test() {
        cout << "539. Minimum Time Difference test starts.\n";
        vector<string> timeSpots = {"23:59", "00:00"};
        cout << "Min Diff = [" << implObj->findMinDifference539(timeSpots) << "]\n\n";
        return;
    }
    
    // 540. Single Element in a Sorted Array Test
    void singleNonDuplicate540Test() {
        cout << "540. Single Element in a Sorted Array test starts.\n";
        vector<int> nums = {3, 3, 7, 7, 10, 11, 11};
        cout << "Non dup element = [" << implObj->singleNonDuplicate540(nums) << "]\n\n";
        return;
    }

    // 542. 01 Matrix Test
    void updateMatrix542Test() {
        cout << "542. 01 Matrix test starts.\n";
        vector<vector<int>> matrix = {
            {0, 0, 0},
            {0, 1, 0},
            {1, 1, 1}
        };
        vector<vector<int>> result = implObj->updateMatrix542(matrix);
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

    // 543. Diameter of Binary Tree Test
    void diameterOfBinaryTree543Test() {
        cout << "543. Diameter of Binary Tree test starts.\n";
        TreeNode * root = new TreeNode(1);
        TreeNode * cur = root;
        cur->left = new TreeNode(2);
        cur->right = new TreeNode(3);
        cur = cur->left;
        cur->left = new TreeNode(4);
        cur->right = new TreeNode(5);

        cout << "Diameter of BT = [" << implObj->diameterOfBinaryTree543(root) << "]\n\n";
        return;
    }

    // 544. Output Contest Matches Test
    void findContestMatch544Test() {
        cout << "544. Output Contest Matches test starts.\n";
        cout << "8 Team will have [" << implObj->findContestMatch544(8) << "]\n\n";
        return;
    }

    // 546. Remove Boxes Test
    void removeBoxes546Test() {
        cout << "546. Remove Boxes test starts.\n";
        vector<int> boxes = {1, 3, 2, 2, 2, 3, 4, 3, 1};
        cout << "max points = [" << implObj->removeBoxes546(boxes) << "]\n\n";
        return;
    }

    // 547. Friend Circles Test
    void findCircleNum547Test() {
        cout << "547. Friend Circles test starts.\n";
        vector<vector<int>> friends = {
            {1, 1, 0},
            {1, 1, 0},
            {0, 0, 1}
        };
        cout << "# of circles = [" << implObj->findCircleNum547(friends) << "]\n\n";
        return;
    }

    // 548. Split Array with Equal Sum Test
    void splitArray548Test() {
        cout << "548. Split Array with Equal Sum test starts.\n";
        vector<int> arr = {1, 2, 1, 2, 1, 2, 1};
        cout << "Can split = [" << (implObj->splitArray548(arr) ? "True" : "False")
            << "]\n\n";
    }

    // 549. Binary Tree Longest Consecutive Sequence II Test
    void longestConsecutive549Test() {
        cout << "549. Binary Tree Longest Consecutive Sequence II test starts.\n";
        TreeNode * root = new TreeNode(2);
        root->left = new TreeNode(1);
        root->right = new TreeNode(3);

        cout << "Longest Consecutive = [" << implObj->longestConsecutive549(root)
            << "].\n\n";
    }

    // 552. Student Attendance Record II Test
    void checkRecord552Test() {
        cout << "552. Student Attendance Record II test starts.\n";
        cout << "n = 6 will result [" << implObj->checkRecord552(6) << "]\n\n";
    }

    // 554. Brick Wall Test
    void leastBricks554Test() {
        cout << "554. Brick Wall test starts.\n";
        vector<vector<int>> bricks = {
            {1, 2, 2, 1},
            {3, 1, 2},
            {1, 3, 2},
            {2, 4},
            {3, 1, 2},
            {1, 3, 1, 1}
        };
        cout << "Minimum brick break = [" << implObj->leastBricks554(bricks) << "]\n\n";
    }

    // 556. Next Greater Element III Test
    void nextGreaterElement556Test() {
        cout << "556. Next Greater Element III test starts.\n";
        cout << "next large to 12443322 is [" << implObj->nextGreaterElement556(12443322)
            << "]\n\n";
    }

    // 557. Reverse Words in a String III Test
    void reverseWords557Test() {
        cout << "557. Reverse Words in a String III test starts.\n";
        cout << "Reverse 'Let's take LeetCode contest' = ["
            << implObj->reverseWords557("Let's take LeetCode contest") << "]\n\n";
    }

    // 559. Maximum Depth of N-ary Tree Test
    void maxDepth559Test() {
        cout << "559. Maximum Depth of N-ary Tree test starts.\n";
        NaryNode* node5 = new NaryNode(5);
        NaryNode* node6 = new NaryNode(6);
        vector<NaryNode*> subChildren = {node5, node6};
        NaryNode* node3 = new NaryNode(3, subChildren);
        NaryNode* node2 = new NaryNode(2);
        NaryNode* node4 = new NaryNode(4);
        vector<NaryNode*> children = {node3, node2, node4};
        NaryNode* node1 = new NaryNode(1, children);

        cout << "Depth of N-ary Tree = [" << implObj->maxDepth559(node1) << "]\n\n";
    }

    // 560. Subarray Sum Equals K Test
    void subarraySum560Test() {
        cout << "560. Subarray Sum Equals K test starts.\n";
        vector<int> arr = {1, 1, 1};
        cout << "# of subarray equals 2 = [" << implObj->subarraySum560(arr, 2)
            << "]\n\n";
    }

    // 562. Longest Line of Consecutive One in Matrix Test
    void longestLine562Test() {
        cout << "562. Longest Line of Consecutive One in Matrix test starts.\n";
        vector<vector<int>> matrix = {
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 1}
        };

        cout << "Longest Consecutive One = [" 
            << implObj->longestLine562(matrix) << "]\n\n"; 
    }

    // 565. Array Nesting Test
    void arrayNesting565Test() {
        cout << "565. Array Nesting test starts.\n";
        vector<int> nums = {5, 4, 0, 3, 1, 6, 2};
        int result = implObj->arrayNesting565(nums);
        cout << "Longest set S has size of [" << result << "].\n\n";
    }

    // 566. Reshape the Matrix
    void matrixReshape566Test() {
        cout << "566. Reshape the Matrix test starts.\n";
        vector<vector<int>> matrix = {
            {1, 2},
            {3, 4}
        };
        vector<vector<int>> result = implObj->matrixReshape566(matrix, 1, 4);
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

    // 567. Permutation in String Test
    void checkInclusion567Test() {
        cout << "567. Permutation in String test starts.\n";
        string s1 = "adc", s2 = "dcda";
        bool result = implObj->checkInclusion567(s1, s2);
        cout << "Is inclusive = [" << (result ? "True" : "False") << "]\n\n";
    }

    // 568. Maximum Vacation Days Test
    void maxVacationDays568Test() {
        cout << "568. Maximum Vacation Days test starts.\n";
        vector<vector<int>> flights = {
            {0, 1, 1},
            {1, 0, 1},
            {1, 1, 0}
        };
        vector<vector<int>> days = {
            {1, 3, 1},
            {6, 0, 3},
            {3, 3, 3}
        };

        int result = implObj->maxVacationDays568(flights, days);
        cout << "Max number of vacation days = [" << result << "]\n\n";
    }

    // 572. Subtree of Another Tree Test
    void isSubtree572Test() {
        cout << "572. Subtree of Another Tree test starts.\n";
        TreeNode *s = new TreeNode(3);
        s->left = new TreeNode(4); s->right = new TreeNode(5);
        TreeNode *tmp = s->left;
        tmp->left = new TreeNode(1); tmp->right = new TreeNode(2);

        TreeNode *t = new TreeNode(4);
        t->left = new TreeNode(1); t->right = new TreeNode(2);

        bool result = implObj->isSubtree572(s, t);
        cout << "t is subtree of s = [" << (result ? "True" : "False") << "]\n\n";
    }

    // 573. Squirrel Simulation Test
    void minDistance573Test() {
        cout << "573. Squirrel Simulation test starts.\n";
        int height = 5, width = 7;
        vector<int> tree = {2, 2};
        vector<int> squirrel = {4, 4};
        vector<vector<int>> nuts = {{3, 0}, {2, 5}};
        int result = implObj->minDistance573(height, width, tree, squirrel, 
            nuts);
        cout << "Min distance = [" << result << "]\n\n";
    }

    // 576. Out of Boundary Paths Test
    void findPaths576Test() {
        cout << "576. Out of Boundary Paths test starts.\n";
        int result = implObj->findPaths576(2, 2, 2, 0, 0);
        cout << "(2, 2, 2, 0, 0) will result = [" << result << "]\n\n";
    }

    // 581. Shortest Unsorted Continuous Subarray Test
    void findUnsortedSubarray581Test() {
        cout << "581. Shortest Unsorted Continuous Subarray test starts.\n";
        vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
        int result = implObj->findUnsortedSubarray581(nums);
        cout << "Subarray length = [" << result << "]\n\n";
    }

    // 582. Kill Process Test
    void killProcess582Test() {
        cout << "582. Kill Process test starts.\n";
        vector<int> pid = {1, 3, 10, 5};
        vector<int> ppid = {3, 0, 5, 3};
        int kill = 5;
        vector<int> result = implObj->killProcess582(pid, ppid, kill);
        cout << "Processes to kill are [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 583. Delete Operation for Two Strings Test
    void minDistance583Test() {
        cout << "583. Delete Operation for Two Strings test starts.\n";
        string word1 = "sea", word2 = "eat";
        int result = implObj->minDistance583(word1, word2);
        cout << "Min Delete steps = [" << result << "]\n\n";
    }

    // 587. Erect the Fence Test
    void outerTrees587Test() {
        cout << "587. Erect the Fence test starts.\n";
        vector<vector<int>> points = {
            {1, 1}, {2, 2}, {2, 0}, {2, 4}, {3, 3}, {4, 2}
        };
        vector<vector<int>> results = implObj->outerTrees587(points);
        cout << "Outline points are [";
        for (int i = 0; i < results.size(); ++i) {
            cout << "[" << results[i][0] << ", " << results[i][1] << "]" 
                << ((i == results.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 588. Design In-Memory File System Test
    void FileSystem588Test() {
        cout << "588. Design In-Memory File System test starts.\n";
        Session5Impl::FileSystem588 fs;
        vector<string> ls1 = fs.ls("/");
        cout << "Initial ls will have [" << ls1.size() << "] output(s).\n";
        fs.mkdir("/a/b/c");
        fs.addContentToFile("/a/b/c/d", "hello");
        vector<string> ls2 = fs.ls("/");
        cout << "Current ls = [";
        for (int i = 0; i < ls2.size(); ++i) {
            cout << ls2[i] << ((i == ls2.size() - 1) ? "" : ", ");
        }
        cout << "]\n";
        string readResult = fs.readContentFromFile("/a/b/c/d");
        cout << "Read from /a/b/c/d is [" << readResult << "]\n\n";
    }

    // 589. N-ary Tree Preorder Traversal Test
    void preorder589Test() {
        cout << "589. N-ary Tree Preorder Traversal test starts.\n";
        NaryNode* node5 = new NaryNode(5);
        NaryNode* node6 = new NaryNode(6);
        vector<NaryNode*> subChildren = {node5, node6};
        NaryNode* node3 = new NaryNode(3, subChildren);
        NaryNode* node2 = new NaryNode(2);
        NaryNode* node4 = new NaryNode(4);
        vector<NaryNode*> children = {node3, node2, node4};
        NaryNode* node1 = new NaryNode(1, children);
        
        vector<int> result = implObj->preorder589(node1);
        cout << "Preorder array = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 590. N-ary Tree Postorder Traversal Test
    void postorder590Test() {
        cout << "590. N-ary Tree Postorder Traversal test starts.\n";
        NaryNode* node5 = new NaryNode(5);
        NaryNode* node6 = new NaryNode(6);
        vector<NaryNode*> subChildren = {node5, node6};
        NaryNode* node3 = new NaryNode(3, subChildren);
        NaryNode* node2 = new NaryNode(2);
        NaryNode* node4 = new NaryNode(4);
        vector<NaryNode*> children = {node3, node2, node4};
        NaryNode* node1 = new NaryNode(1, children);
        
        vector<int> result = implObj->postorder590(node1);
        cout << "Postorder array = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }
    
    // 594. Longest Harmonious Subsequence Test
    void findLHS594Test() {
        cout << "594. Longest Harmonious Subsequence test starts.\n";
        vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
        int result = implObj->findLHS594(nums);
        cout << "LHS Length = [" << result << "]\n\n";
    }

    // 599. Minimum Index Sum of Two Lists Test
    void findRestaurant599Test() {
        cout << "599. Minimum Index Sum of Two Lists test starts.\n";
        vector<string> l1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
        vector<string> l2 = {"KFC", "Shogun", "Burger King"};
        vector<string> result = implObj->findRestaurant599(l1, l2);
        cout << "Common Least Index Restaurant = [";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << ((i == result.size() - 1) ? "" : ", ");
        }
        cout << "]\n\n";
    }

    // 600. Non-negative Integers without Consecutive Ones Test
    void findIntegers600Test() {
        cout << "600. Non-negative Integers without Consecutive Ones test starts.\n";
        cout << "Num 14 will generate [" << implObj->findIntegers600(14) << "]\n\n";
    }

private:
    Session5Impl * implObj;
};

#endif