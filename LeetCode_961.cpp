// class Solution {
// public:
//     int repeatedNTimes(vector<int>& nums) {
//         int sz = nums.size();
//         int ans;
//         unordered_map<int,int> um;
//         for(int i=0;i<sz;i++)
//         {
//             um[nums[i]]++;
//             if(um[nums[i]]==(sz/2))
//             {
//                 ans = nums[i];
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int sz = nums.size();
        for(int i=0;i<sz-2;i++)
        {
            if((nums[i]==nums[i+1]) || (nums[i]==nums[i+2]))
            {
                return nums[i];
            }
        }
        return nums[nums.size() - 1];
    }
};