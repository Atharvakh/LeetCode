class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        
        for(int num : nums) {
            if(num == 2) {
                ans.push_back(-1);
                continue;
            }
            
            int pos = 0;
            while((num >> pos) & 1) {
                pos++;
            }
            
            ans.push_back(num - (1 << (pos - 1)));
            
        }
        
        return ans;
    }
};