class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set <int> s1,s2;
        for(auto n:nums1)
            s1.insert(n);
        for(auto n:nums2)
            s2.insert(n);
        vector <int> l1,l2;
        for(auto s:s1)
        {
            if(!s2.count(s))
            {
                l1.push_back(s);
            }
        }
        for(auto s:s2)
        {
            if(!s1.count(s))
            {
                l2.push_back(s);
            }
        }
        vector <vector<int>> answer;
        answer.push_back(l1);
        answer.push_back(l2);
        return answer;
        
    }
};
