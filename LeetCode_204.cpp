class Solution {
public:
    int countPrimes(int n) {
        if(n==1 || n==0 ) return 0;
        if(n==2) return 0;
        int count = 1;
        vector<bool>prime(n+1,true);
        for(int i=3;i<n;i+=2)
        {
            if(prime[i]){
                count++;
                for(int j=2*i;j<n;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        return count;
    }
};