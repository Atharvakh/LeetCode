class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        // int sz = nums.size();
        // int m = operations.size();
        // int n = 2;
        // for(int i=0;i<m;i++)
        // {
        //     for(int k=0;k<sz;k++)
        //     {
        //         if(operations[i][0]==nums[k])
        //         {
        //             nums[k]=operations[i][1];
        //             break;
        //         }
        //     }
        // }
        // return nums;        
        unordered_map <int,int> um;
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]=i;
        }
        for(auto &e: operations)
        {
            int oldval = e[0];
            int newval = e[1];
            int index = um[oldval];
            nums[index]=newval;
            um.erase(oldval);
            um[newval] = index;
        }
        return nums;
    }
};