class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int sz = nums.size();
        vector<int>ans;
        int j = 0,i = 0;
        while(ans.size()<sz){
            for(i = 0;i<=1000;i++){
                if((i | (i+1)) == nums[j]){
                    ans.push_back(i);
                    break;
                }
            }
            if(i>=1000){
                ans.push_back(-1);
            }
            j++;
        }
        return ans;
    }
};