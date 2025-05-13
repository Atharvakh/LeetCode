class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int n = s.size();
        int prev = 0;
        unordered_map<char,int>um{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=n-1;i>=0;i--)
        {
            int curr = um[s[i]];
            if(curr<prev)
            {
                ans-=curr;
            }
            else
            {
                ans+=curr;
            }
            prev=curr;
        }
        return ans;
    }
};