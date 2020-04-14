#ifndef _SESSION_6_IMPL_H
#define _SESSION_6_IMPL_H

#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <string>
#include <unordered_map>
#include <math.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Session6Impl {
public:
    Session6Impl() {
        cout << "Impl object for Leetcode Session 6 problems constructed.\n";
    }

    // 604. Design Compressed String Iterator
    class StringIterator604 {
    public:
        StringIterator604(string compressedString) {
            istringstream iss(compressedString);
            char curChar = ' ';
            int curFreq = 0;
            while (iss >> curChar >> curFreq) {
                charFreqQ.push({curChar, curFreq});
            }
        }
        
        char next() {
            if (!hasNext()) {
                return ' ';
            }

            int curChar = charFreqQ.front().first;
            charFreqQ.front().second--;
            if (charFreqQ.front().second == 0) {
                charFreqQ.pop();
            }
            return curChar;
        }
        
        bool hasNext() {
            return !charFreqQ.empty();
        }
    
    private:
        queue<pair<char, int>> charFreqQ;
    };

    // 605. Can Place Flowers
    bool canPlaceFlowers605(vector<int>& flowerbed, int n) {
        if (flowerbed.empty()) {
            return 0;
        }
        if (flowerbed[0] == 0) {
            flowerbed.insert(flowerbed.begin(), 0);
        }
        if (flowerbed.back() == 0) {
            flowerbed.push_back(0);
        }

        int count = 0, result = 0;
        for (int i = 0; i <= flowerbed.size(); ++i) {
            if (i < flowerbed.size() && flowerbed[i] == 0) {
                count++;
            }
            else {
                result += (count - 1) / 2;
                count = 0;
            }
        }
        return (result >= n);
    }

    // 611. Valid Triangle Number
    int triangleNumber611(vector<int>& nums) {
        if (nums.size() < 3) {
            return 0;
        }
        int result = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                int left = j + 1, right = n;
                while (left < right) {
                    int mid = (left + right) / 2;
                    if (nums[i] + nums[j] > nums[mid]) {
                        left = mid + 1;
                    }
                    else {
                        right = mid;
                    }
                }
                result += right - j - 1;
            }
        }

        return result;
    }

    // 616. Add Bold Tag in String
    string addBoldTag616(string s, vector<string>& dict) {
        const int strLen = s.size();
        vector<bool> isBold(strLen, false);

        for (int i = 0; i < strLen; ++i) {
            for (auto word: dict) {
                const int wordLen = word.size();
                if (i + wordLen <= strLen && s.substr(i, wordLen) == word) {
                    for (int j = i; j < i + wordLen; ++j) {
                        isBold[j] = true;
                    }
                }
            }
        }

        string result = "";
        bool isInBold = false;
        for (int i = 0; i < strLen; ++i) {
            if ((i == 0 && isBold[0]) 
                || (i > 0 && !isBold[i - 1] && isBold[i])) {
                result += "<b>";
            }
            result += s[i];
            if ((i == strLen - 1 && isBold[i]) 
                || (i < strLen && isBold[i] && !isBold[i + 1])) {
                result += "</b>";
            }
        }
        return result;
    }

    // 617. Merge Two Binary Trees
    TreeNode* mergeTrees617(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) {
            return NULL;
        }
        TreeNode* cur = new TreeNode(
            (t1 ? t1->val : 0) + (t2 ? t2->val : 0));
        cur->left = mergeTrees617(
            (t1 ? t1->left : NULL), (t2 ? t2->left : NULL));
        cur->right = mergeTrees617(
            (t1 ? t1->right : NULL), (t2 ? t2->right : NULL));
        return cur;
    }

    // 621. Task Scheduler
    int leastInterval621(vector<char>& tasks, int n) {
        vector<int> taskFreqMap(26, 0);
        int maxFreq = 0, maxCnt = 0;
        for (int i = 0; i < tasks.size(); ++i) {
            taskFreqMap[tasks[i] - 'A']++;
            if (taskFreqMap[tasks[i] - 'A'] == maxFreq) {
                maxCnt++;
            }
            else if (taskFreqMap[tasks[i] - 'A'] > maxFreq) {
                maxFreq = taskFreqMap[tasks[i] - 'A'];
                maxCnt = 1;
            }
        }

        int proposedEmpty = (n - (maxCnt - 1)) * (maxFreq - 1);
        int remainingTasks = tasks.size() - maxFreq * maxCnt;
        int idlePosition = max(0, proposedEmpty - remainingTasks);
        return tasks.size() + idlePosition;
    }

    // 622. Design Circular Queue
    class MyCircularQueue622 {
    public:
        /** Initialize your data structure here. Set the size of the queue to be k. */
        MyCircularQueue622(int k) : d_size(k) {}
        
        /** Insert an element into the circular queue. Return true if the operation is successful. */
        bool enQueue(int value) {
            if (isFull()) {
                return false;
            }
            data.push_back(value);
            return true;
        }
        
        /** Delete an element from the circular queue. Return true if the operation is successful. */
        bool deQueue() {
            if (isEmpty()) {
                return false;
            }
            data.erase(data.begin());
            return true;
        }
        
        /** Get the front item from the queue. */
        int Front() {
            if (isEmpty()) {
                return -1;
            }
            return data.front();
        }
        
        /** Get the last item from the queue. */
        int Rear() {
            if (isEmpty()) {
                return -1;
            }
            return data.back();
        }
        
        /** Checks whether the circular queue is empty or not. */
        bool isEmpty() {
            return data.empty();
        }
        
        /** Checks whether the circular queue is full or not. */
        bool isFull() {
            return data.size() >= d_size;
        }
        
    private:
        int d_size;
        vector<int> data;
    };

    // 623. Add One Row to Tree
    TreeNode* addOneRow623(TreeNode* root, int v, int d) {
        if (!root) {
            return NULL;
        }
        if (d == 1) {
            TreeNode * newRoot = new TreeNode(v);
            newRoot->left = root;
            return newRoot;
        }
        else {
            queue<TreeNode *> q({root});
            while (!q.empty()) {
                --d;
                if (d == 0) {
                    return root;
                }
                int curLevelSize = q.size();
                for (int i = 0; i < curLevelSize; ++i) {
                    TreeNode * front = q.front();
                    q.pop();
                    if (d == 1) {
                        TreeNode * nextLeft = front->left;
                        TreeNode * nextright = front->right;
                        front->left = new TreeNode(v);
                        front->left->left = nextLeft;
                        front->right = new TreeNode(v);
                        front->right->right = nextright;
                    }
                    else {
                        if (front->left) {
                            q.push(front->left);
                        }
                        if (front->right) {
                            q.push(front->right);
                        }
                    }
                }
            }
            return root;
        }
    }

    // 624. Maximum Distance in Arrays
    int maxDistance624(vector<vector<int>>& arrays) {
        priority_queue<pair<int, int>> minPq, maxPq;
        for (int i = 0; i < arrays.size(); ++i) {
            minPq.push({-arrays[i][0], i});
            maxPq.push({arrays[i].back(), i});
        }

        if (minPq.top().second != maxPq.top().second) {
            return minPq.top().first + maxPq.top().first;
        }
        else {
            int maxTop = maxPq.top().first; maxPq.pop();
            int minTop = minPq.top().first; minPq.pop();
            return (maxTop + minPq.top().first > minTop + maxPq.top().first) ?
                maxTop + minPq.top().first : minTop + maxPq.top().first;
        }
    }

    // 625. Minimum Factorization
    int smallestFactorization625(int a) {
        if (a == 1) {
            return 1;
        }
        string result;
        for (int k = 9; k >= 2; --k) {
            while (a % k == 0) {
                result = to_string(k) + result;
                a /= k;
            }
        }

        if (a > 1) {
            return 0;
        }
        long long resInLL = stoll(result);
        return resInLL > INT_MAX ? 0 : static_cast<int>(resInLL);
    }

    // 628. Maximum Product of Three Numbers
    int maximumProduct628(vector<int>& nums) {
        if (nums.size() < 3) {
            return 0;
        }
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return max(nums[0] * nums[1] * nums[n - 1],
            nums[n - 3] * nums[n - 2] * nums[n - 1]);
    }

    // 629. K Inverse Pairs Array
    int kInversePairs629(int n, int k) {
        vector<vector<int>> dp(n + 1, vector<int>(k + 1));
        dp[0][0] = 1;
        int MAX = 1000000007;

        for (int i = 1; i < n + 1; ++i) {
            dp[i][0] = 1;
            for (int j = 1; j <= k; ++j) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MAX;
                if (j >= i) {
                    dp[i][j] = (dp[i][j] - dp[i - 1][j - i] + MAX) % MAX;
                }
            }
        }
        return dp.back().back();
    }

    // 630. Course Schedule III
    int scheduleCourse630(vector<vector<int>>& courses) {
        priority_queue<int> pq;
        int curTime = 0;
        sort(courses.begin(), courses.end(),
            [](const vector<int> &courseA, const vector<int> &courseB) {
                return courseA[1] < courseB[1];
            });
        
        for (int i = 0; i < courses.size(); ++i) {
            curTime += courses[i][0];
            pq.push(courses[i][0]);
            if (curTime > courses[i][1]) {
                curTime -= pq.top();
                pq.pop();
            }
        }

        return pq.size();
    }

    // 633. Sum of Square Numbers
    bool judgeSquareSum633(int c) {
        for (int i = static_cast<int>(sqrt(c)); i >= 0; --i) {
            if (i * i == c) {
                return true;
            }
            int b = c - i * i, t = static_cast<int>(sqrt(b));
            if (t * t == b) {
                return true;
            }
        }
        return false;
    }

    // 632. Smallest Range Covering Elements from K Lists
    vector<int> smallestRange632(vector<vector<int>>& nums) {
        vector<int> result;
        if (nums.size() == 0) {
            return result;
        }

        vector<pair<int, int>> numIdxArr;
        int K = nums.size();
        for (int i = 0; i < K; ++i) {
            for (int j = 0; j < nums[i].size(); ++j) {
                numIdxArr.push_back({nums[i][j], i});
            }
        }
        sort(numIdxArr.begin(), numIdxArr.end());

        int left = 0, count = 0, diff = INT_MAX;
        unordered_map<int, int> idxFreqMap;
        for (int right = 0; right < numIdxArr.size(); ++right) {
            if (idxFreqMap[numIdxArr[right].second] == 0) {
                count++;
            }
            idxFreqMap[numIdxArr[right].second]++;
            while (count == K && left <= right) {
                if (diff > numIdxArr[right].first - numIdxArr[left].first) {
                    diff = numIdxArr[right].first - numIdxArr[left].first;
                    result = {numIdxArr[left].first, numIdxArr[right].first};
                }
                idxFreqMap[numIdxArr[left].second]--;
                if (idxFreqMap[numIdxArr[left].second] == 0) {
                    count--;
                }
                left++;
            }
        }
        return result;
    }

    // 634. Find the Derangement of An Array
    int findDerangement634(int n) {
        if (n == 1) {
            return 0;
        }
        vector<long long> dp(n + 1);
        dp[1] = 0; dp[2] = 1;
        for (int i = 3; i <= n; ++i) {
            dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]) % 1000000007;
        }
        return static_cast<int>(dp.back());
    }
};

#endif