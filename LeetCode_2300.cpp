class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector <int> pairs;
        int ps = potions.size();
        for(int spell : spells)
        {
            int low=0,high=ps;
            while(low<high)
            {
                int mid = low+(high-low)/2;
                if((long long) spell * potions[mid] >= success)
                {
                    high = mid;
                }
                else
                {
                    low = mid+1;
                }
            }
            pairs.push_back(ps-low);
        }
        return pairs;
    }
};