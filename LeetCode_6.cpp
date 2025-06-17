class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> ans(numRows); 
        int i = 0;
        int len = s.size();

        while (i < len) {
            for (int index = 0; index < numRows && i < len; index++) {
                ans[index] += s[i++];
            }
            for (int index = numRows - 2; index > 0 && i < len; index--) {
                ans[index] += s[i++];
            }
        }

        string res;
        for (auto str : ans) {
            res += str;
        }
        return res;
    }
};
