class Solution {
public:
    int differenceOfSums(int n, int m) {
        //n is for range and m is for divisibility check
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++)
        {
             if(i%m!=0)
             {
                 sum1+=i;
             }
            else
             {
                 sum2+=i;
             }
        }
        return sum1-sum2;
    }
};