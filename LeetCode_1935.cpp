class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> broken(26, false);
        for (char c : brokenLetters) broken[c - 'a'] = true;//Traverse broken which is 26 character long and set true to broken keys

        int count = 0; // word count
        bool ok = true;

        for (int i = 0; i <= text.size(); i++) {
            if (i < text.size() && text[i] != ' ') {
                if (broken[text[i] - 'a']) ok = false;
            } else {
                if (ok) count++;
                ok = true;
            }
        }
        return count;
    }
};