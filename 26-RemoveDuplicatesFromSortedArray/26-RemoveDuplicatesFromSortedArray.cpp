// Last updated: 27/08/2026, 9:11:20 pm
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == last) {
                nums.erase(nums.begin() + i);
                i --;
            }
            last = nums[i];
        } 
        return nums.size();
    }
};