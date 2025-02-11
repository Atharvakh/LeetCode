class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss = s.size();
        int st = t.size();
        bool flag = false;
        
        if (ss != st) {
            return false;
        }

        // for (int i = 0; i < ss; i++) {
        //     int flag = 0;
        //     for (int j = 0; j < st; j++) {
        //         if (t[j] != '#' && s[i] == t[j]) {
        //             t[j] = '#';
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if (!flag) {
        //         return false;
        //     }
        // }
        
        // return true;
        unordered_map <char,int> um;
        for(int i=0;i<ss;i++)
        {
            um[s[i]]++;
        }
        
        for (int i = 0; i < st; i++) {
            if (um.find(t[i]) != um.end() && um[t[i]] > 0) {
                um[t[i]]--;
            } else {
                return false;
            }
        }
        
        for (int i = 0; i < ss; i++) {
            if (um[s[i]] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
