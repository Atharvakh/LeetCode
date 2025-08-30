class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) {
            return result;
        }

        unordered_map<char, string> um = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
        };

        // Start with an empty string in the result vector.
        result.push_back("");

        // Iterate through each digit in the input string.
        for (char digit : digits) {
            string letters = um.at(digit);
            vector<string> new_result;

            // Iterate through each existing combination in the result vector.
            for (const string& combination : result) {
                // For each letter corresponding to the current digit,
                // create new combinations and add them to new_result.
                for (char letter : letters) {
                    new_result.push_back(combination + letter);
                }
            }
            // Replace the old combinations with the new ones.
            result = new_result;
        }

        return result;
    }
};