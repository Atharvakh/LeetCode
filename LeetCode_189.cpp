// class Solution {
// public:
//     void shift(vector<int>& arr)
//     {
//         int sz = arr.size();
//         int temp = arr[sz-1];
//         for(int i=sz-2;i>=0;i--)
//         {
//             arr[i+1] = arr[i];
//         }
//         arr[0] = temp;
//     }
//     void rotate(vector<int>& nums, int k) {
//         int sz = nums.size();
//         if(k>sz) k=k%sz;
//         for(int i=1;i<=k;i++)
//         {
//             shift(nums);
//         }
        
//     }
// };
class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start++], nums[end--]);
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums, 0, n - 1);     
        reverse(nums, 0, k - 1);     
        reverse(nums, k, n - 1);     
    }
};
