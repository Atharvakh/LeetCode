class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;
        while(!is_sorted(nums.begin(), nums.end())){
            int sz = nums.size();
            int min_sum = INT_MAX;
            int min_idx = sz;
            for(int i = 1; i<sz; i++){
                int temp =  nums[i]+nums[i-1];
                if(temp<min_sum){
                    min_sum = temp;
                    min_idx = i-1;
                }
            }
            nums[min_idx] = nums[min_idx] + nums[min_idx+1];
            nums.erase(nums.begin() + min_idx + 1);
            operations++;
        }
        return operations;
    }
};