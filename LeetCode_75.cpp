class Solution {
public:
    void sortColors(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
       
       int onecnt = 0,twocnt = 0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==1)
        {
            onecnt++;
        }
        else if(nums[i]==2)
        {
            twocnt++;
        }
       }
       int zerocnt = nums.size()-onecnt-twocnt;
       for(int j=0;j<zerocnt;j++)
       {
            nums[j]=0;
       }
       for(int k=zerocnt;k<(onecnt+zerocnt);k++)
       {
            nums[k]=1;
       }
       for(int i=(onecnt+zerocnt);i<nums.size();i++)
       {
            nums[i]=2;
       }
    }
};