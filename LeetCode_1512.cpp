class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>umap;
        int sz = nums.size();
        int cnt=0;
        for(int i=0;i<sz;i++)
        {
            umap[nums[i]]++;
        }
        for(auto e:umap)
        {
            if(e.second>1)
            {
                cnt+=(e.second*(e.second-1)/2);
            }
        }
        return cnt;
    }
};