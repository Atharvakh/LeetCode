class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int number=0;
        vector<bool>ans;
        for(int i=0; i<nums.size();i++)
        {
            number = (number*2+nums[i])%5;
            if(number==0)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }

        }
        return ans;
    }
};