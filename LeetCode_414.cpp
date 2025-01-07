class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),std::greater<int>());
        int i,cnt=0;
        int sz = nums.size();
        for(i=0;i<sz-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
               continue;
            }
            else
            {
                cnt++;
                if(cnt==2)
                {
                    return nums[i+1];
                }
            }
        }
        return nums[0];
    }
};
