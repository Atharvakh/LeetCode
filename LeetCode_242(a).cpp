class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int ss = s.size();
        int st = t.size();
        bool flag = false;

        if (ss != st)
        {
            return false;
        }

        for (int i = 0; i < ss; i++)
        {
            int flag = 0;
            for (int j = 0; j < st; j++)
            {
                if (t[j] != '#' && s[i] == t[j])
                {
                    t[j] = '#';
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                return false;
            }
        }

        return true;
    }
};
