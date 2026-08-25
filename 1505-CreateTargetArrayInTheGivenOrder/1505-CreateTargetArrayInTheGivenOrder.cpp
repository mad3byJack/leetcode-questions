// Last updated: 25/08/2026, 11:31:35 am
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        std::vector<int> target;
        for (int x = 0; x < nums.size(); x++) {
            target.insert(target.begin() + index[x], nums[x]);
        }
        return target;
    }
};