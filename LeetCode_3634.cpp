class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int sz = nums.size();
        sort(nums.begin(), nums.end());
        int count = sz - 1;
        int left = 0;
        for(int i = 0; i < sz; i++){
            while(left < i && nums[i] > (long long)nums[left] * k){
                left++;
            }
            int kept = i - left + 1;
            count = min(count, sz - kept);
        }
        return count;
    }
};