class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,char> mapSS,mapTS;

        for(int i=0;i<s.length();i++)
        {
            char sc = s[i], tc = t[i];
            if(mapSS.count(sc) && mapSS[sc] != tc) return false;
            if(mapTS.count(tc) && mapTS[tc] != sc) return false;

            mapSS[sc] = tc;
            mapTS[tc] = sc;

        }
        return true;
    }
};