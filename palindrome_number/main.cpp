#include<iostream>
#include<string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string num = std::to_string(x);
        int length = num.length();
        std::string firstHalf;
        std::string secondHalf;
        if (length % 2 == 0) {
            int end = (length / 2);
            for (int i = 0; i < end; i++) {
                firstHalf += num[i];
            }
            for (int i = length - 1; i >= end; i--) {
                secondHalf += num[i];
            }
        }
        else {
            int middleIndex = ((length + 1) / 2) - 1;
            for (int i = 0; i < middleIndex; i++) {
                firstHalf += num[i];
            }
            for (int i = length - 1; i > middleIndex; i--) {
                secondHalf += num[i];
            }
        }
        if (firstHalf == secondHalf) {
            return true;
        }
        else {
            return false;
        }
    }
};