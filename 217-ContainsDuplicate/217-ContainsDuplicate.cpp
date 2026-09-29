// Last updated: 29/09/2026, 12:15:29 pm
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> window;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (window.find(nums[i]) != window.end()) {
                return true;
            }
            window.insert(nums[i]);
        }
        return false;
    }
};