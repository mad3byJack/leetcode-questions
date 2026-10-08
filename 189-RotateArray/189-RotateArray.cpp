// Last updated: 08/10/2026, 3:44:49 pm
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(begin(nums),end(nums));
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k,nums.end());
    }
};