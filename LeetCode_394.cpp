class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;  // Stack for strings
        stack<int> numStack;    // Stack for numbers
        string currString = "";
        int currNum = 0;

        for (char c : s) {
            if (isdigit(c)) {
                // Build the number for repeat count
                currNum = currNum * 10 + (c - '0');
            } else if (c == '[') {
                // Push current string and number onto stacks
                numStack.push(currNum);
                strStack.push(currString);
                currString = "";
                currNum = 0;
            } else if (c == ']') {
                // Pop string and number from stacks and decode
                string temp = strStack.top();
                strStack.pop();
                int repeatCount = numStack.top();
                numStack.pop();
                for (int i = 0; i < repeatCount; ++i) {
                    temp += currString;
                }
                currString = temp;
            } else {
                // Append character to current string
                currString += c;
            }
        }

        return currString;  // Final decoded string
    }
};