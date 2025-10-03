class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        while(n)
        {
            n=n/5;
            res+=n;
        }
        return res;
    }
};
//Factorial Trailing Zeros has a simple logic that 0 comes from 
//5*2, there may be plenty factors of 2 for n but there are much 
//less factors of 5 so we track them