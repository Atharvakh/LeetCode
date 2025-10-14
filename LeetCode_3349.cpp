class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int sz = nums.size(), inc = 1, prevInc = 0, mlen = 0;
        for(int i = 1;i<sz;i++){
            if(nums[i]>nums[i-1]) inc++;
            else{
                prevInc = inc;
                inc = 1;
            }
            mlen = max(mlen,max(inc >> 1,min(prevInc,inc)));
            if(mlen>=k) return true;
        }
        return false;
    }
};