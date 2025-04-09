class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0;
        int count=0,maxi=0;
        while(j<nums.size())
        {
            if(nums[j++]==1)
            {
                count++;
                maxi = max(count,maxi);

            }
            else
            {
                i=j;
                count=0;
            }
        }
        return maxi;
    }
};