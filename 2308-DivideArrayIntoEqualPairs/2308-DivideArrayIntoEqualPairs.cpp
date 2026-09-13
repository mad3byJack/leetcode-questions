// Last updated: 13/09/2026, 3:22:54 pm
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freqs;
        for (int i = 0; i < nums.size(); i++) {
            freqs[nums[i]] ++;
        }
        for (const auto& [num, freq] : freqs) {
            if (freq % 2 == 1) {
                return false;
            }
        }
        return true;
    }
};