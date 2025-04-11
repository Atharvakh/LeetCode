class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //Number of zero's in the window
        int zeroCount = 0;
        int maxSize = 0;
        //left end of the window
        int left = 0;

        for(int i=0; i<nums.size(); i++)
        {
            zeroCount += (nums[i]==0);
            while (zeroCount >1)
            {
                zeroCount -=(nums[left]==0);
                left++;
            }
            maxSize = max((i-left),maxSize);
        }
        return maxSize;
    }
};