// Last updated: 27/08/2026, 10:16:30 am
struct item {
    int val;
    int freq;
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> ans;
        std::vector<struct item> items;
        for (int i = 0; i < nums.size(); i++) {
            bool contains = false;
            for (int x = 0; x < items.size(); x++) {
                if (items[x].val == nums[i]) {
                    contains = true;
                    items[x].freq ++;
                }
            }
            if (!contains) {
                struct item curr;
                curr.val = nums[i];
                curr.freq = 1;
                items.push_back(curr);
            }
        }
        for (int x = 0; x < k; x++) {
            struct item highest;
            highest.freq = 0;
            int index;
            for (int i = 0; i < items.size(); i++) {
                if (items[i].freq > highest.freq) {
                    highest = items[i];
                    index = i;
                }
            }
            ans.push_back(highest.val);
            items.erase(items.begin() + index);
        }
        return ans;
    }
};
