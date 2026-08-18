#include<unordered_map>
#include<algorithm>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> groups;
        for (auto x : strs) {
            string key = x;
            sort(key.begin(), key.end());
            groups[key].push_back(x);
        }
        for (auto x : groups) {
            result.push_back(x.second);
        }
        return result;
    }
};
