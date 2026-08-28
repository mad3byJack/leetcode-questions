// Last updated: 28/08/2026, 11:56:04 am
class Solution {
public:
    int tribonacci(int n) {
        std::vector<int> nums;
        nums.push_back(0);
        nums.push_back(1);
        nums.push_back(1);
        for (int i = 0; i < 35; i++) {
            nums.push_back(nums[i] + nums[i + 1] + nums[i + 2]);
        }
        return nums[n];
    }
};