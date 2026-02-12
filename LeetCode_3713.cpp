class Solution {
public:
    int longestBalanced(string s) {
        int maxLen = 0;
        for(int i = 0; i < s.size(); i++){
            unordered_map<char,int> um;
            for(int j = i; j < s.size(); j++){
                um[s[j]]++;
                int firstFreq = um.begin()->second;
                bool balanced = true;
                for(auto& p : um){
                    if(p.second != firstFreq){
                        balanced = false;
                        break;
                    }
                }
                
                if(balanced){
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        
        return maxLen;
    }
};