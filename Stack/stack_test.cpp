#include "stack_test.h"

#include <iostream>
#include <vector>
using namespace std;

StackTest::StackTest() {
    cout << "Test object for Leetcode Stack problems constructed.\n";
    implObj = new StackImpl();
}

// 20. Valid Parentheses Test
void StackTest::isValid20Test() {
    cout << "20. Valid Parentheses test starts.\n";   
    string s = "([)]";
    cout << "([)] isValid = " << implObj->isValid20(s) << ".\n\n";
    return;
}

// 32. Longest Valid Parentheses Test
void StackTest::longestValidParentheses32Test() {
    cout << "32. Longest Valid Parentheses test starts.\n";
    cout << "((())() will have max length = [" << implObj->longestValidParentheses32("((())()") << "]\n\n";
    return;
}

// 42. Trapping Rain Water Test
void StackTest::trap42Test() {
    cout << "42. Trapping Rain Water test starts.\n";
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "[0,1,0,2,1,0,1,3,2,1,2,1] will contain " << implObj->trap42(height) << " units of water.\n\n";
    return;
}