class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int sz = nums.size();
        vector<int> a1(sz,0);
        vector<int> ans;
        for(int i=0;i<sz;i++)
        {
            a1[nums[i]-1] = nums[i];
        }
        for(int i=0;i<sz;i++)
        {
            if(a1[i]==0)
            {
                ans.push_back(i+1);
            }
        }
        return(ans);
    }
};
