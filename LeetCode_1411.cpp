class Solution {
public:
    int numOfWays(int n) {
        const long long mod = 1e9+7;
        long long aba = 6, abc=6;
        long long next_abc,next_aba;

        for(int i=1;i<n;i++)
        {
            next_aba = (3*aba + 2*abc)%mod;
            next_abc = (2*aba + 2*abc)%mod;
            aba = next_aba;
            abc = next_abc;
        }
        return (aba+abc)%mod;
    }
};