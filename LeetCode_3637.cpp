class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=1;
        while(i<nums.size() && nums[i-1]<nums[i])
            i++;
        int p = i-1;
        while(i<nums.size() && nums[i-1]>nums[i])
            i++;
        int q = i-1;
        while(i<nums.size() && nums[i-1]<nums[i])
            i++;
        int flag = i-1;
        if((p!=0) && (q!=p) && (flag == nums.size() - 1 && flag != q))
            return true;
        return false;
    }
};