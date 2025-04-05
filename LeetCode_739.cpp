class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int sz = temperatures.size();
        vector<int> answer(sz, 0);
        stack<int> st; // stack to store indices

        for (int i = 0; i < sz; ++i) {
            // Check if the current temperature is warmer than the last stored index
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                answer[prevIndex] = i - prevIndex; // Days waited
            }
            st.push(i); // Store current index
        }

        return answer;
    }
};
