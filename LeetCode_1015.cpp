class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int n = 0;
        int num=0;
        while(n<=k)
        {
            num = (num*10+1)%k;
            n++;
            if(num==0)
            {
                return n;
            }
            else
            {
                continue;
            }
        }
        return -1;
    }
};