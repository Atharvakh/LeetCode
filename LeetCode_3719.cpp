class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int sz = nums.size();
        int maxLen = 0;
        for(int i = 0; i < sz; i++){
            unordered_set<int>even_set;
            unordered_set<int>odd_set;
            for(int j = i; j < sz; j++){        
                if(nums[j]%2==0){
                    even_set.insert(nums[j]);
                }
                else{
                    odd_set.insert(nums[j]);
                }
                if(even_set.size()==odd_set.size())
                    maxLen = max(maxLen,j-i+1);
            }
        }   
        return maxLen;
    }
};