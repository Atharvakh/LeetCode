class Solution {
public:
    vector<int> countBits(int n) {
        int i;
        vector <int> ans;

        for(i=0;i<=n;i++)
        {
            int temp = i;
            int cnt = 0;
            while(temp!=0)
            {
                int t = temp&1;
                if(t==1)
                {
                    cnt++;
                }
                temp = temp>>1; 
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
