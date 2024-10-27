// Given a string s, find the length of the longest substring without repeating characters.


// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

#include<iostream>
#include<string>
#include<conio.h>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> charIndexe; // Biggest.
        int len = 0; // Of the longest substring.
        int start = 0;
        for (int end = 0; end < s.length(); end++) {
            if (charIndexe.count(s[end]) > 0 && charIndexe[s[end]] >= start) {
                start = charIndexe[s[end]] + 1;
            }
            charIndexe[s[end]] = end;
            int currentSubstrLen = end - start + 1;
            if (currentSubstrLen > len) {
                len = currentSubstrLen;
            }
        }
        return len;
    }
};

int main() {
    cout << "Enter a string: ";
    string s;
    cin >> s;

    int output = Solution().lengthOfLongestSubstring(s);
    cout << "The length of the longest substring is " << output << ".\n";
    _getch();
}
