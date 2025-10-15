class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        unordered_map<char, string> cToW;
        unordered_map<string, char> wToC;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.length() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string w = words[i];

            if (cToW.count(c)) {
                if (cToW[c] != w) return false;
            } else {
                if (wToC.count(w)) return false;
                cToW[c] = w;
                wToC[w] = c;
            }
        }

        return true;
    }
};