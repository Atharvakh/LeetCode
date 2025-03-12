class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> countMap;
        vector<int> ans;

        // Count occurrences of elements in nums1
        for (int num : nums1) {
            countMap[num]++;
        }

        // Find intersection by checking nums2
        for (int num : nums2) {
            if (countMap[num] > 0) {
                ans.push_back(num);
                countMap[num]--;
            }
        }
     
    return ans;
        
    }
};
