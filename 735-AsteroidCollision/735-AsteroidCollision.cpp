// Last updated: 28/09/2026, 1:16:27 pm
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        for (int& a : asteroids) {
            while (!stack.empty() && a < 0 && stack.back() > 0) {
                int diff = a + stack.back();
                if (diff < 0) {
                    stack.pop_back();
                } else if (diff > 0) {
                    a = 0;
                } else {
                    a = 0;
                    stack.pop_back();
                }
            }
            if (a != 0) {
                stack.push_back(a);
            }
        }
        return stack;
    }
};