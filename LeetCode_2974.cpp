class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        priority_queue<int,vector<int>,greater<int>> minHeap(nums.begin(),nums.end());
        vector <int> ans;
        while(!minHeap.empty())
        {
            int alice = minHeap.top();
            minHeap.pop();
            int bob = minHeap.top();
            minHeap.pop();
            ans.push_back(bob);
            ans.push_back(alice);
        }
        return ans;
    }
};