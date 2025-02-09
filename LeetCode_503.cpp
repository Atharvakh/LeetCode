class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> stk;
        vector<int> ans(n, -1);

        for (int i = 2 * n - 2; i >= 0; --i) {
            while (!stk.empty() && nums[i % n] >= stk.top()) {
                stk.pop();
            }
            if (!stk.empty()) {
                ans[i % n] = stk.top();
            }
            stk.push(nums[i % n]);
        }

        return ans;
    }
};
