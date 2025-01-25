class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    int sz = stones.size();
    int i;
    unordered_map<char,int> um;
    for(i=0;i<sz;i++)
    {
        um[stones[i]]++;
    }
    int cnt =0;
    for(i=0;i<jewels.size();i++)
    {
        if(um.find(jewels[i])!=um.end())
        {
            cnt+=um[jewels[i]];

        }
    }
    return cnt;
    }
};