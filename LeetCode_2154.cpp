class Solution {
public:
    int findval(vector<int>& nums, int og)
    {
        for(auto x:nums)
        {
            if(og == x)
            {
                og = 2*og;
            }
        }
        return og;
    }
    int findFinalValue(vector<int>& nums, int original) {
        int new_original = findval(nums,original);
        while(new_original != original)
        {
            original = new_original;
            new_original = findval(nums,original);
        }
        return original;
    }
};