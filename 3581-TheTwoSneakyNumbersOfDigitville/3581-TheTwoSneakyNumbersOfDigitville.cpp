// Last updated: 06/09/2026, 5:42:04 pm
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        std::vector<int> res;
        std::unordered_map<int, int> vals;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            vals[nums[i]] ++;
            if (vals[nums[i]] > 1) {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};