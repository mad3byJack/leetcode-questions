// Last updated: 10/08/2026, 10:52:18 pm
class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i ++) {
            if (s[i] > 64 && s[i] < 91) {
                s[i] += 32;
            }
        }
        return s;
    }
};