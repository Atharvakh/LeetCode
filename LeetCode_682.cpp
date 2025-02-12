class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        
        for (auto e : operations) {
            if (e == "C") {
                if (!stk.empty()) {
                    stk.pop();
                }
            } else if (e == "D") {
                if (!stk.empty()) {
                    int last = stk.top();
                    stk.push(last * 2);
                }
            } else if (e == "+") {
                if (stk.size() >= 2) {
                    int left = stk.top();
                    stk.pop();
                    int right = stk.top();
                    stk.push(left);
                    stk.push(left + right);
                }
            } else {
                stk.push(stoi(e));
            }
        }
        
        int ans = 0;
        while (!stk.empty()) {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};
