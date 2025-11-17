class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int posi = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (posi != -1 && i - posi - 1 < k)
                    return false;
                posi = i;
            }
        }
        return true;
    }
};