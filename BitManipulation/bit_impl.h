#ifndef _BIT_IMPL_H
#define _BIT_IMPL_H

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class BitManipulationImpl {
public:
    BitManipulationImpl() {
        cout << "Impl object for Leetcode Bit Manipulation problems constructed.\n";
    }

    // 136. Single Number
    int singleNumber136(vector<int>& nums) {
        int andValue = 0;
        for (int i = 0; i < nums.size(); ++i) {
            andValue ^= nums[i];
        }

        return andValue;
    }

    // 137. Single Number II
    int singleNumber137(vector<int>& nums) {
        int result = 0;
        for (int pos = 0; pos < 32; ++pos) {
            int curBitVal = 0;
            for (int i = 0; i < nums.size(); ++i) {
                curBitVal += (nums[i] >> pos) & 1;
            }

            result += (curBitVal % 3) << pos;
        }

        return result;
    }

    // 201. Bitwise AND of Numbers Range
    int rangeBitwiseAnd201(int m, int n) {
        long long mask = INT_MAX;
        while ((m & mask) != (n & mask)) {
            mask <<= 1;
        }

        return (m & mask);
    }

    // 268. Missing Number
    int missingNumber268(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            result ^= ((i+1) ^ nums[i]);
        }
        return result;
    }

    // 371. Sum of Two Integers
    int getSum371(int a, int b) {
        if (b == 0) {
            return a;
        }
        
        int curSum = a ^ b;
        int carry = (a & b & 0x7ffffffff) << 1;
        return getSum371(curSum, carry);
    }
};

#endif