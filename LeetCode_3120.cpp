class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int,int>um;
        for(char x:word){
            um[x]++;
        }
        int count=0;
        for(int i=65,j=97;i<91 && j< 123;i++,j++){
            if(um[i] > 0 && um[j] > 0){
                count++;
            }
        }
        return count;
    }
};