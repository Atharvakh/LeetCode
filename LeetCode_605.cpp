class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool lf,rt;
        int cnt = 0;
        int sz = flowerbed.size();
        for(int i=0;i<sz;i++)
        {
            if(flowerbed[i]==0)
            {
                lf=false;
                rt=false;
                if(i==0 || flowerbed[i-1]==0)
                {
                    lf=true;
                }
                if(i==sz-1 || flowerbed[i+1]==0)
                {
                    rt=true;
                }
                if(lf && rt)
                {
                    flowerbed[i]=1;
                    cnt++;
                }

            }
        }
        return(n<=cnt);

    }
};
