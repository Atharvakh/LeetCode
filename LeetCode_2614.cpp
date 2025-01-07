bool isprime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;  
    if (num % 2 == 0) return false; 
    int sr = sqrt(num);
    for (int i = 3; i <= sr; i += 2) {  
        if (num % i == 0) return false;
    }
    return true;
}
class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int rn = nums.size();
        int cn = nums[0].size();
        int max = 0;
        for(int i = 0;i<rn;i++)
        {
            int val = nums[i][i];
            if(isprime(val))
            {
                if(val> max)
                {
                    max = val;
                }
            }
        }
        for(int i = 0;i<rn;i++)
        {
            int val = nums[i][rn-i-1];
            if(isprime(val))
            {
                if(val> max)
                {
                    max = val;
                }
            }
        }
        return max;
    }
};
