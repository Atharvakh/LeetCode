class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.length()<k)
        {
            int size = s.size();
            for(int i=0;i<size;i++)
            {
                char next = 'a'+((s[i]-'a'+1)%26);
                s=s+next;
            }
        }
        return s[k-1];
    }
};