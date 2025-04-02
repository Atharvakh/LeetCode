class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto c : mp)
        {
            if(s.count(c.second))
            {
                return false;
            }
            s.insert(c.second);
        }
        return true;
    }
};