// Last updated: 08/09/2026, 10:35:18 pm
class Solution {
public:
    bool isPalindrome(int x) {
        std::string num = std::to_string(x);
        std::string reversed = num;
        std::reverse(reversed.begin(), reversed.end());
        if (num == reversed) {
            return true;
        }
        return false;
    }
};