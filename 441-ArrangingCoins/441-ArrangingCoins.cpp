// Last updated: 05/10/2026, 1:26:04 pm
class Solution {
public:
    int arrangeCoins(int n) {
        int i = 0;
        while (i < n) {
            i++;
            n -= i;
        }
        return i;
    }   
};