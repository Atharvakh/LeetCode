class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>um;
        int count=0;
        int sz = nums.size();
        for(int i=0;i<sz;i++)
        {
            um[nums[i]]++;
        }
        int max_freq=0;
        for(auto x:um)
        {
            max_freq = max(max_freq,x.second);
        }
        for(auto x:um)
        {
            if(x.second==max_freq)
            {
                count=count+max_freq;
            }
        }
        return count;
    }
};