class Solution {
public:
    string sortVowels(string s) {
        int sz = s.size();
        vector<char> arr;  // use char instead of int

        // collect vowels
        for (int i = 0; i < sz; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                arr.push_back(s[i]);
            }
        }

        // sort descending (same as your code)
        sort(arr.begin(), arr.end(), greater<char>());

        int arsz = arr.size();

        // put vowels back
        for (int i = 0; i < sz; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                s[i] = arr[arsz - 1];  // take last element
                arsz--;                // safely move to next
            }
        }

        return s;
    }
};
