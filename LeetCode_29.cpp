class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
//         if(dividend == INT_MIN && divisor == 1)
//         {
//             return INT_MIN;
//         }
//         int newdividend = abs(dividend);
//         int newdivisor = abs(divisor);
//         int count = 0;
//         while (newdividend >= newdivisor) {
//             newdividend -= newdivisor;
//             count++;
//         }
        
//         if ((dividend < 0) ^ (divisor < 0)) {
//             return -count;
//         } else {
//             return count;
//         }
//     }
// };
        long tempDividend = labs(dividend);
        long tempDivisor = labs(divisor);
        long count = 0;

        while (tempDividend >= tempDivisor) {
            long tempDivisorShift = tempDivisor;
            long multiple = 1;

            while (tempDividend >= (tempDivisorShift << 1)) {
                tempDivisorShift <<= 1;
                multiple <<= 1;
            }

            tempDividend -= tempDivisorShift;
            count += multiple;
        }
        if ((dividend < 0) ^ (divisor < 0)) {
            count = -count;
        }
        return count;
    }
    
};