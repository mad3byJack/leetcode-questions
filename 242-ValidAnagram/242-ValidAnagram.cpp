// Last updated: 11/10/2026, 1:34:37 pm
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> first;
        unordered_map<char, int> second;
        for (const auto& c : s) {
            first[c] ++;
        }
        for (const auto& c : t) {
            second[c] ++;
        }
        if (first == second) return true;
        return false;
    }
};