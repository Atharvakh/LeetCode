class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int w1_s = word1.size();
        int w2_s = word2.size();
        int len = (w1_s>w2_s)?w1_s:w2_s;
        for(int i=0;i<len;i++)
        {
            if(w1_s>i)
            {
                ans+=word1[i];
            }
            if(w2_s>i)
            {
                ans+=word2[i];
            }
        }
        return ans;
    }
};
