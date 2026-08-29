// Last updated: 30/08/2026, 8:59:15 am
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        std::vector<bool> found(nums.size(), false);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 1 && nums[i] <= nums.size()) {
                found[nums[i] - 1] = true;
            }
        }
        for (int x = 0; x < nums.size(); x++) {
            if (!found[x]) {
                return x + 1;
            }
        }
        return (nums.size() + 1);
    }
};