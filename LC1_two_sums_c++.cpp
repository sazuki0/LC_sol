/*
Problem: Two Sums

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // create a hashmap to store vector element index into
        std::unordered_map<int, int> numMap;

        /*
            Iterate through vector array and find difference (target - vector element)
            if the difference can be found in the hashmap, return that index and current index
            else store the value and index into map as pair value::index
        */
        for(int i = 0; i < nums.size(); i++) {
            //int difference = target - nums[i];
            if (numMap.find(target - nums[i]) != numMap.end()) {
                return {numMap[target - nums[i]], i};
            }
            else {
                numMap[nums[i]] = i;
            }
        }

        // solution should be found here, if not, return empty vector
        return {};
    }
};
