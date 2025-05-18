class Solution {
public:
    int myAtoi(string s) {
        int size = s.size();
        int num = 0;
        bool isNegative = false;
        int countNo = 0;

        for(int i = 0;i<size;i++)
        {
            if(int(s[i]) >= 48 && int(s[i])<=57)
            {
                countNo++;
                int digit = s[i] -'0';

                if(num > INT_MAX/10 || (num == INT_MAX/10 && digit > 7))
                {
                    return isNegative? INT_MIN : INT_MAX;
                }
                num *= 10;
                num += digit;
            }
            else if(countNo == 0)
            {
                if (s[i] == ' ') continue;

                if(s[i] == '-')
                {
                    isNegative = true;
                    countNo++;
                    continue;
                }

                if(s[i] == '+')
                {
                    countNo++;
                    continue;
                }
                break;

            }
            else if(countNo != 0)
            {
                break;
            }
            

        }
        return isNegative? -num : num;
    }
};