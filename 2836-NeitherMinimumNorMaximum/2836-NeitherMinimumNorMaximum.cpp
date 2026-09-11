// Last updated: 11/09/2026, 5:08:15 pm
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        int return_num = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > min && nums[i] < max) {
                return nums[i];
            }
        }
        return return_num;
    }
};