class Solution {
public:
    int appendCharacters(string s, string t) {
        int sz1 = s.size();
        int sz2 = t.size();
        int i=0,j=0;
        while(i<sz1 && j<sz2)
        {
            if(s[i]==t[j])
            {
                j++;
            }
            
            i++;
            
        }
        return sz2-j;

    }
};