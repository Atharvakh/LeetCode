class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return -1;
        
        long long sum = LLONG_MIN;
        
        for(int start = 0; start < n - 2; start++) {
            int i = start + 1;
            long long temp_sum = nums[start];
            
            if(i >= n || nums[i] <= nums[i-1]) continue;
            while(i < n && nums[i-1] < nums[i]) {
                temp_sum += nums[i];
                i++;
            }
            
            if(i >= n || nums[i] >= nums[i-1]) continue;
            long long sumAfterPhase1 = temp_sum;
            while(i < n && nums[i-1] > nums[i]) {
                temp_sum += nums[i];
                i++;
            }
            
            if(i >= n || nums[i] <= nums[i-1]) continue;
            long long sumAfterPhase2 = temp_sum;
            
            while(i < n && nums[i-1] < nums[i]) {
                temp_sum += nums[i];
                sum = max(sum, temp_sum);
                i++;
            }
        }
        
        return sum == LLONG_MIN ? -1 : sum;
    }
};
