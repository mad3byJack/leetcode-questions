// Last updated: 19/10/2026, 4:03:51 pm
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int orAll = 0;
        for (int x : nums) orAll |= x;
        return orAll << (nums.size() - 1);
    }
};