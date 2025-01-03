class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int sz_s = s.size();
        int sz_t = t.size();
        
        while (i < sz_t && j < sz_s) {
            if (t[i] == s[j]) {
                j++; 
            }
            i++;  
        }
        
        return j == sz_s;
    }
};
