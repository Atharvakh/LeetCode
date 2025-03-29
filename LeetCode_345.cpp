class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        
        auto isVowel = [](char c) -> bool {
            return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
                   c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        while (i < j) {
            if (isVowel(s[i]) && isVowel(s[j])) {
                // Swap vowels
                std::swap(s[i], s[j]);
                i++;
                j--;
            } else {
                if (!isVowel(s[i])) i++;
                if (!isVowel(s[j])) j--;
            }
        }
        return s;
    }
};