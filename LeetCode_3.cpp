class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <char> st;
        int start = 0;
        int m=0;
        for(int end = 0; end<s.length(); ++end)
        {
            while(st.count(s[end]))
            {
                st.erase(s[start]);
                start++;
            }
            
                st.insert(s[end]);
                m = max(m,end-start+1);
        }
        return m;
    }
};
