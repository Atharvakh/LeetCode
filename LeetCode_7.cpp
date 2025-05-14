class Solution {
public:
    int reverse(int x) {
        vector<int>ans;
        int n = x;
        long long fans=0;
        while(n!=0)
        {
            int temp;
            temp=n%10;
            n=n/10;
            ans.push_back(abs(temp));
        }
        for(int i=0;i<ans.size();i++)
        {
            fans*=10;
            fans+=ans[i];
        }

        if (fans < INT_MIN || fans > INT_MAX)
            return 0;
    
        if(x<0)
            return -fans;
        
        return static_cast<int>(fans);

    }
};