class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int sz = bits.size();
        int i=0;
        while(i<sz-1){
             if (bits[i] == 1) {
                i += 2;
            } else {
                i += 1; 
            }
        }
        return (i == sz-1);
    }
};
