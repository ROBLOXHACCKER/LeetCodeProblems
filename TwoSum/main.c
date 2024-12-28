#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count = 0;
        while (count < nums.size()) {
            int i = count + 1;
            while (i < nums.size()) {
                if (nums[count] + nums[i] == target) {
                    return {count, i}; 
                }
                i++;
            }
            count++;
        }
        return {};
    }
};
