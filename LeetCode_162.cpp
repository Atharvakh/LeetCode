class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int sz = nums.size();
        int l=0,r=sz-1;
        while(l<r)
        {
            int mid = l+(r-l)/2;
            if(nums[mid]<nums[mid+1])
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        return l;
    }
};