class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
        {
            return false;
        }
        vector <int> vec1(26,0);
        vector <int> vec2(26,0);

        for(char &ch:word1) vec1[ch-'a']++;
        for(char &ch:word2) vec2[ch-'a']++;

        for(int i=0;i<26;i++)
        {
            if((vec1[i]==0) != (vec2[i]==0))
            {
                return false;
            }
        }
        sort(begin(vec1),end(vec1));
        sort(begin(vec2),end(vec2));

        return vec1==vec2;

    }
};