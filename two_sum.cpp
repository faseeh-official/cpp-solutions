// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:
// *********
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// *********
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// *********
// Input: nums = [3,3], target = 6
// Output: [0,1]

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // To store numbers and their indices
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement needed to reach the target
            
            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                result.push_back(numMap[complement]); // Push the index of the complement
                result.push_back(i); // Push the current index
                return result; // Return the result as soon as we find the answer
            }
            
            // Store the number and its index in the map
            numMap[nums[i]] = i;
        }
        
        return result; // Return empty if no solution is found (though problem states one solution)
    }
};
