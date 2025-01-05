class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(),nums.end());
        return(nums[sz/2]);

    }
};
