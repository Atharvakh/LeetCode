class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // Edge case

        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) { // Ensure haystack is long enough
            int j = 0;
            while (j < n && haystack[i + j] == needle[j]) { 
                j++;
            }
            if (j == n) return i; // Return starting index
        }
        return -1; // No match found
    }
};