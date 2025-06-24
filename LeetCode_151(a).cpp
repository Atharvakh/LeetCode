class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s.begin(),s.end());
        int left =0;
        int right = 0;
        int i=0;
        while(i<n)
        {
            while(i<n && s[i] == ' ')
            {
                i++;
            }
            if(i==n)
            {
                break;
            }
            while(i<n && s[i]!=' ')
            {
                s[right++] = s[i++];
            }
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' ';
            left = right;
            i++;
        }
        s.resize(right-1);
        return s;
        
    }
};