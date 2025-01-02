class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0,sum=0;
        int sz = gain.size();
        for(int i=0;i<sz;i++)
        {
            sum=sum+gain[i];
            if(max<sum)
            {
                max = sum;
            }
        }
        return max;
    }
};
