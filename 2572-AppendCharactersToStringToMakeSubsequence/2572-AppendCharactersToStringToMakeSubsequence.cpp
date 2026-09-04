// Last updated: 04/09/2026, 11:17:04 am
class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0;
        for (int x = 0; x < s.size(); x++) {
            if (t[i] == s[x]) {
                i++;
            }
        }
        return t.size() - i;
    }
};