class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for( int itr : nums)
        {
            ans ^= itr;
        }
        return ans;
        
    }
};