class Solution {
public:
    int thirdMax(vector<int>& nums) {
        std::set<int>TopThree;
        for(int num : nums)
        {
            TopThree.insert(num);
            if(TopThree.size()>3)
            {
                TopThree.erase(TopThree.begin());
            }
        }
        if(TopThree.size()<3)
        {
            return *TopThree.rbegin();
        }
        return *TopThree.begin();
    }
};
