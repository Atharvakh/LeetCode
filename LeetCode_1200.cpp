class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int min_diff = INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            min_diff = min(min_diff,(arr[i+1]-arr[i]));
        }
        for(int i = 0; i < arr.size()-1; i++){
            int diff = arr[i+1] - arr[i];
            if(diff == min_diff){
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        return ans;
    }
};