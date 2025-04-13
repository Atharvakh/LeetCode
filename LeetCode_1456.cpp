class Solution {
public:
    int maxVowels(string s, int k) {
        int maxCount = 0;
        int tempCount = 0;
        int sz = s.size();
        int i = 0, j = 0;

        while (j < sz) {
            // Add current char if vowel
            if (isVowel(s[j])) {
                tempCount++;
            }

            // If window size is exactly k
            if ((j - i + 1) == k) {
                maxCount = max(maxCount, tempCount);

                // Slide the window
                if (isVowel(s[i])) {
                    tempCount--;
                }
                i++;  // Always move left of the window
            }

            j++;  // Always move right end forward
        }

        return maxCount;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
