#include<algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> target;
        for (int i = 0; i < nums.size(); i++) {
            if (target.find(nums[i]) != target.end()) {
                return true;
            }
            target.insert(nums[i]);
        }
        return false;
    }
};