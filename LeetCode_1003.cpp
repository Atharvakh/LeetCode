class Solution {
    public:
        bool isValid(string s) {
            int sz = s.size();
            stack <char> stk;
            for(int i=0;i<sz;i++)
            {
                if(s[i]=='c')
                {
                    if((stk.size()<2) || (stk.top()!='b'))
                    {
                        return false;
                    }
                    else
                    {
                        stk.pop();
                    }
                    if(stk.top()!='a')
                    {
                        return false;
                    }
                    else
                    {
                        stk.pop();
                    }
                }
                else
                {
                    stk.push(s[i]);
                }
            }
            return (stk.empty());
        }
    };