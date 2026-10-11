// Last updated: 11/10/2026, 1:36:40 pm
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> first;
        unordered_map<char, int> second;
        for (char c : s) {
            first[c]++;
        }
        for (char c : t) {
            second[c]++;
        }
        if (first == second) return true;
        return false;
    }
};