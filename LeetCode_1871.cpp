class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int sz = s.length();
        if(s.back() & 1) return false;
        s[0] = 'v';
        int reach = 0, maxR = maxJump;
        for(int i=minJump;i<sz;i++){
            if(i>maxR) return false;
            reach += s[i-minJump] == 'v';
            reach -= (i>maxJump) && s[i-maxJump-1] == 'v';


            if(reach && (~s[i] & 1)) {
                s[i] = 'v';
                maxR = i+maxJump;
            }
        }
        return reach;
    }
};