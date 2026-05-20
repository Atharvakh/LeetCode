class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int sz = A.size();
        int count = 0;
        vector<int>ans;
        unordered_map<int,int> um;
        for(int i=0;i<sz;i++){
            if(A[i]==B[i]){
                um[A[i]]+=2;
                count++;
            }
            else{
                um[A[i]]++;
                um[B[i]]++;
                if(um[A[i]]==2){count++;}
                if(um[B[i]]==2){count++;}
            }
            ans.push_back(count);
        }
        return ans;
    }
};