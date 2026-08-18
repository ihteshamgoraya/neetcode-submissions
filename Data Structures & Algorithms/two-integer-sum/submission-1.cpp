#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum (vector<int>& nums, int target) {
        unordered_map<int, int> values;
        vector<int> indexes;
        for (int i = 0; i < nums.size(); i++) {
            int search = target - nums[i];
            int index = 0;
            auto it = values.find(search);
            if (it != values.end()) {
                indexes.push_back(it->second);
                indexes.push_back(i);
                return indexes;
            } else {
                values[nums[i]] = i;
            }
        }
        return {};
    }
    
};
