class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        sort(hFences.begin(), hFences.end());
        sort(vFences.begin(), vFences.end());

        unordered_set<int>diff;
        for(int i=0;i<vFences.size();i++)
        {
            for(int j=i+1;j<vFences.size();j++)
            {
                int gap = vFences[j]-vFences[i];
                diff.insert(gap);
            }
        }
        int maxside = -1;
        for(int i=0;i<hFences.size();i++)
        {
            for(int j=i+1;j<hFences.size();j++)
            {
                int gap = hFences[j]-hFences[i];
                if(diff.contains(gap)){
                    maxside = max(maxside,gap);
                }
            }
        }
        if(maxside == -1) return -1;
        long long area = (long long) maxside*maxside;
        return area%1000000007;
    }
};