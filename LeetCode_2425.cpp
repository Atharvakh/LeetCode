class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        int ans1 = 0;
        int ans2 = 0;

        // XOR all elements of nums1 if its size is odd
        if (sz1 % 2 == 1) {
            for (int num : nums2) {
                ans2 ^= num;
            }
        }

        // XOR all elements of nums2 if its size is odd
        if (sz2 % 2 == 1) {
            for (int num : nums1) {
                ans2 ^= num;
            }
        }
        return ans1 ^ ans2;
        
    }
};
