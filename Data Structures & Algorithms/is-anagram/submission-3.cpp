#include<algorithm>
#include<string>
#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> freq;
        unordered_map<char, int> freq1;
        for (auto x : s) {
            freq[x]++;
        }
        for (auto x : t) {
            freq1[x]++;
        }   
        if (freq == freq1) return true;
        return false;
    }
};
