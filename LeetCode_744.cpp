class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int tg = target;
        char next_min = '{';
        for(int i=0;i<letters.size();i++){
            if((tg<letters[i]) && (letters[i]<next_min)){
                next_min = letters[i];
            }
        }
        if(next_min=='{'){
            return letters[0];
        }
        return next_min;
    }
};