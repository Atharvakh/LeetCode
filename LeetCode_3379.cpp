class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int sz = nums.size();
        vector<int>result(sz);
        for(int i=0;i<sz;i++){
            if(nums[i]>0){
                int idx = ((i+nums[i])%sz+sz)%sz;
                result[i] = nums[idx];
            }
            else if(nums[i]<0){
                int idx = ((i-abs(nums[i]))%sz+sz)%sz;
                result[i] = nums[idx];
            }
            else if(nums[i]==0){
                result[i] =nums[i];
            }
        }
        return result;
    }
};