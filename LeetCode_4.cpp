class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sz = nums1.size() + nums2.size();
        vector<int> ans;
        int i = 0, j = 0;

        // Merge the two sorted arrays
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i++]);
            } else {
                ans.push_back(nums2[j++]);
            }
        }

        // Append remaining elements
        while (i < nums1.size()) {
            ans.push_back(nums1[i++]);
        }
        while (j < nums2.size()) {
            ans.push_back(nums2[j++]);
        }

        // Compute the median
        if (sz % 2 == 0) {
            int mid = sz / 2;
            return (ans[mid] + ans[mid - 1]) / 2.0;
        } else {
            return ans[sz / 2];
        }
    }
};