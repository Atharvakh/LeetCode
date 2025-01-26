class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int sz = nums.size();
        unordered_map<int,int> um;
        vector <int> ans;
        for(int i=0;i<sz;i++)
        {
            um[nums[i]]++;
        }
        for(int i = 0;i<sz;i++)
        {
            if(um[nums[i]]==2)
            {
                ans.push_back(nums[i]);
                um[nums[i]] = 0;
            }
        }
        return ans;
    }
};