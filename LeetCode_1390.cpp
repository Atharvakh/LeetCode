class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sz = nums.size();
        int ans_global=0;
        for(auto x : nums)
        {
            int div_num = 0;
            int ans_local=0;
            for(int j = 1;j * j <= x;j++)
            {
                if(x % j == 0) 
                {
                    if (j * j == x) 
                    {
                        div_num += 1;
                        ans_local += j;
                    } else 
                    {
                        div_num += 2;
                        ans_local += j;
                        ans_local += (x / j);
                    }
                }
            }
            if(div_num==4)
            {
                ans_global+=ans_local;
            }
        }
        return ans_global;
    }
};