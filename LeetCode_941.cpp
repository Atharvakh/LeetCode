class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int sz = arr.size();
        bool inc = false;
        bool dec = false;
        int m = 0, m_i = -1;
            for (int i = 0; i < sz; i++) {
            if (arr[i] > m) {
                m = arr[i];
                m_i = i;
            }
        }
        if (m_i == 0 || m_i == sz - 1) {
            return false;
        }
        int temp = arr[0];
        for (int i = 1; i <= m_i; i++) {
            if (arr[i] <= temp) {
                return false;
            }
            temp = arr[i];
            inc = true;
        }
        for (int i = m_i + 1; i < sz; i++) {
            if (arr[i] >= temp) {
                return false;
            }
            temp = arr[i];
            dec = true;
        }
        return inc && dec;
    }
};
