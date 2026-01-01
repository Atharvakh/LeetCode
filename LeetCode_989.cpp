// class Solution {
// public:
//     vector<int> addToArrayForm(vector<int>& num, int k) {
//         int sz = num.size();
//         long tnum = 0;
//         for(int i=0;i<sz;i++)
//         {
//             tnum = tnum*10+num[i];
//         }
//         tnum+=k;
//         vector<int>answer;
//         while(tnum>0)
//         {
//             int temp = tnum%10;
//             answer.push_back(temp);
//             tnum = tnum/10;
//         }
//         reverse(answer.begin(),answer.end());
//         return answer;
//     }
// };
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int sz = num.size();
        vector<int>ans;
        for(int i=sz-1;i>=0;i--)
        {
            k = k + num[i];
            int temp = k%10;
            ans.push_back(temp);
            k = k/10;
        }
        while(k > 0) 
        {
            ans.push_back(k % 10);
            k = k / 10;
        }    
        reverse(ans.begin(),ans.end());
        return ans;
    }

};