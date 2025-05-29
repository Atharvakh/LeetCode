class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long lo = 1,hi=x;
        long res=0;
        while(lo<=hi)
        {
            int mid = lo+(hi-lo)/2;
            if(mid<=x/mid)
            {
                res=mid;
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return res;
    }
};