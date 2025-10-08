class Solution {
public:
    int binary_to_gray(int n) 
    {
        return n ^ (n >> 1);
    }
    vector<int> grayCode(int n) {
        vector<int>ans;
        if(n==1)
        {
            ans.push_back(0);
            ans.push_back(1);
            return ans;
        }
        //Generate (n-1)-bit Gray code
        vector<int>gray_code_list;
        int num_values = pow(2,n);
        for(int i=0;i<num_values;i++)
        {
            gray_code_list.push_back(binary_to_gray(i));
        }
        return gray_code_list;
    }
    
};