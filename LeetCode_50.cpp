class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long N = n;  // to safely handle INT_MIN
        if (N >= 0) {
            while (N > 0) {
                if (N % 2 == 1) {
                    ans = ans * x;
                }
                x = x * x;
                N = N / 2;
            }
        } else {
            x = 1 / x;
            N = -N;
            while (N > 0) {
                if (N % 2 == 1) {
                    ans = ans * x;
                }
                x = x * x;
                N = N / 2;
            }
        }
        return ans;
    }
};
