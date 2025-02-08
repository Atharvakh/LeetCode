class Solution {
public:
     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        vector<int> ans(sz1, -1);
        
        unordered_map<int, int> um;

        for (int i = 0; i < sz2; i++) {
            for (int j = i + 1; j < sz2; j++) {
                if (nums2[j] > nums2[i]) {
                    um[nums2[i]] = nums2[j];
                    break;
                }
            }
        }

        for (int i = 0; i < sz1; i++) {
            if (um.find(nums1[i]) != um.end()) {
                ans[i] = um[nums1[i]];
            }
        }

        return ans;
    }
};