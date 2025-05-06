class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequencies
        for (int num : nums) {
            freq[num]++;
        }

        // Sort with custom comparator
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b])
                return a > b;  // Higher number comes first if frequency same
            return freq[a] < freq[b];  // Lower frequency comes first
        });

        return nums;
    }
};
