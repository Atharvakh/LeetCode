class Solution {
public:
    int addMinimum(string word) {
        string sample = "abc";
        int sz = word.size();
        int ans = 0;
        int i = 0, j = 0;

        while(i < sz) {
            if(word[i] == sample[j]) {
                i++;
            } else {
                ans++; // missing letter in pattern
            }
            j = (j + 1) % 3; // always move to next letter in sample
        }

        // after processing the word, if pattern is incomplete, add missing letters
        ans += (3 - j) % 3;

        return ans;
    }
};
