class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        
        int left = 0;
        int right = price.back() + 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (check(price, k, mid)) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return right - 1;
    }
    
private:
    bool check(vector<int>& price, int k, int value) {
        int current = price[0];
        int result = 1;
        
        for (int i = 1; i < price.size(); i++) {
            if (price[i] >= current + value) {
                current = price[i];
                result++;
            }
        }
        
        return result >= k;
    }
};