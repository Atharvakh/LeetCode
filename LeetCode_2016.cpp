class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i,Max=-1;;
        int Min=nums[0],n=nums.size();
        for(i=0;i<nums.size();i++)
        {
            int var=nums[i];
            if(var<=Min)
            {
                Min=var;
            }
            else
            {
                Max=max(Max,var-Min);
            }
        }
        return Max;
    }
};