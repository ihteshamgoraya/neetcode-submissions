#include<unordered_map>
#include<algorithm>
#include<string>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> groups;
        array<int, 26> count = {};
        for (auto word : strs) {
            int count[26] = {0};
            for (auto c : word) {
                count[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]);
            }
            groups[key].push_back(word);
        }
        for (auto x : groups) {
            result.push_back(x.second);
        }
        return result;
    }
};
