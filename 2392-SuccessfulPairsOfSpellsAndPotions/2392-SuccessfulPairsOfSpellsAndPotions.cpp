// Last updated: 05/11/2026, 2:22:44 pm
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> res;
        int n = potions.size();
        for (int i : spells) {
            int l = 0;
            int r = n;
            while (l < r) {
                int mid = l + (r - l) / 2;
                if (1LL * i * potions[mid] >= success) {
                    r = mid;
                }
                else {
                    l = mid + 1;
                }
            }
            res.push_back(potions.size() - l);
        }
        return res;
    }
};
