class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<vector<int>> st;
        vector<int> res(temperatures.size(), 0); // Corrected initialization
        for (int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() && temperatures[i] > st.top()[0]) {
                auto top = st.top();
                st.pop();
                res[top[1]] = i - top[1];
            }
            st.push({ temperatures[i], i });
        }
        return res;
    }
};