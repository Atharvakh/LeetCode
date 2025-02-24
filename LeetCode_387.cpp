class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> Q;
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++) 
        {
            freq[s[i]]++;
            Q.push(i);
            while (!Q.empty() && freq[s[Q.front()]] > 1) {
                Q.pop();
            }
        }
        return (Q.empty() ? -1 : Q.front());
    }
};
