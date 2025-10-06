class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> s(nums.begin(), nums.end());
        int longest = 1;
        int currentStreak = 1;
        int prev = *s.begin();
        for(auto it = ++s.begin();it!=s.end();++it)
        {
            if(*it==prev+1)
            {
                currentStreak++;
            }
            else
            {
                currentStreak = 1;
            }
            longest = max(longest,currentStreak);
            prev = *it;
            
        }
        return longest;
    }
};