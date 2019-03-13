#ifndef _MATH_IMPL_H
#define _MATH_IMPL_H

#include <iostream>
#include <vector>
using namespace std;

class MathImpl {
public:
    MathImpl();
    
    // 7. Reverse Integer
    int reverse7(int x);

    // 8. String to Integer (atoi)
    int myAtoi8(string str);

    // 9. Palindrome Number
    bool isPalindrome9(int x);

    // 12. Integer to Roman
    string intToRoman12(int num);

    // 13. Roman to Integer
    int romanToInt13(string s);
};

#endif