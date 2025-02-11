class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int sz = s.size();
        stack <int> stk;
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='(')
            {
                stk.push(i);
            }
            else if(s[i]==')' && !stk.empty())
            {
                stk.pop();
            }
            else if(stk.empty() && s[i]==')')
            {
                s[i]='#';
            }
        }
         while (!stk.empty()) {
            int index = stk.top();
            if (index < sz) {
                s[index] = '#'; 
            }
            stk.pop();
        }
        string ans="";
        for(auto e:s)
        {
            if(e!='#')
            {
                ans+=e;
            }
        }
        return ans;
    }
};