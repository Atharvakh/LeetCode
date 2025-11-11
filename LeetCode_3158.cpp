class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int>um;
        for(auto x : nums)
        {
            um[x]++;
        }
        for(auto x : um)
        {
            if(x.second==2)
            {
                ans = ans^x.first;
            }
        }
        return ans;
    }
};