class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> stk;
        for( auto n : tokens)
        {
            if(n == "+" || n == "-" || n == "*" || n == "/" )
            {
                int rtg = stk.top();
                stk.pop();
                int lft = stk.top();
                stk.pop();
                int result = 0;
                if(n == "+")
                {
                    result  = lft + rtg;
                }
                else if( n == "-")
                {
                    result = lft - rtg;
                }
                else if( n == "*")
                {
                    result = lft * rtg;
                }
                else if( n == "/")
                {
                    result = lft / rtg;
                }
                stk.push(result);
            }
            else{
                stk.push(stoi(n));
            }
        }
        return stk.top();
    }
};