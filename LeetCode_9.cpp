class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int z = x;
        int y = 0;
        while(x>0)
        {
            if (y > INT_MAX / 10) {
                return false; 
            }
            y = (y*10)+(x%10);
            x = x/10;
        }
        return (z==y);
    }
};
