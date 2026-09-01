// Last updated: 01/09/2026, 11:07:44 am
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int x = 0; x < n - i - 1; x++) {
                if (nums[x] > nums[x + 1]) {
                    swap(nums[x], nums[x + 1]);
                }
            }
        }
    }
};