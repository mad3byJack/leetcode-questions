// Last updated: 27/08/2026, 9:04:36 pm
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int highest = 0;
        for (int i = 0; i < s.size(); i++) {
            std::vector<char> found;
            int x = i;
            char curr = s[x];
            while (std::find(found.begin(), found.end(), curr) == found.end()) {
                found.push_back(curr);
                x ++;
                if (x >= s.size()) {
                    break;
                }
                curr = s[x];
            }
            if ((x - i) > highest) {
                highest = x - i;
            }
            cout << highest;
        }
        return highest;
    }
};