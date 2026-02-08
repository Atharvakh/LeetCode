class Solution {
public:
    int minimumDeletions(string s) {
        int sz = s.size();
        int res = sz;
        int a = 0, b = 0;
        for(auto& c : s){
            a+= c&1;
        }
        for(auto& c : s){
            a-=c &1;
            res = min(res,a+b);
            b+= ~c&1;
        }
        return res;
    }
};