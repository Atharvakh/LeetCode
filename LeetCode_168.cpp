class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ="";
        while(columnNumber > 0)
        {
            columnNumber--;//Adjusting to 1-based indexing
            char c = 'A' + (columnNumber%26);
            ans = c + ans;
            columnNumber /= 26;

        }
        return ans;
    }
};