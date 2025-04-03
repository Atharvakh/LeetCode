class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
        int maxvol = 0;
        int i = 0;  // Start pointer at the beginning
        int j = sz - 1;  // End pointer at the last index
        int temp;

        while (i < j) {
            // Calculate area
            temp = (j - i) * min(height[i], height[j]);
            maxvol = max(temp, maxvol);

            // Move the pointer pointing to the shorter height
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxvol;
    }
};