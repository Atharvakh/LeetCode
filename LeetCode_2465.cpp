class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<double> us;
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            us.insert((nums[i] + nums[j]));//if sum is same then avg is also same;
            i++;
            j--;
        }
        return us.size();
    }
};