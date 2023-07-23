class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // stack<vector<int>> st;
        // vector<int> res(temperatures.size(), 0); // Corrected initialization
        // for (int i = 0; i < temperatures.size(); i++) {
        //     while (!st.empty() && temperatures[i] > st.top()[0]) {
        //         auto top = st.top();
        //         st.pop();
        //         res[top[1]] = i - top[1];
        //     }
        //     st.push({ temperatures[i], i });
        // }
        // return res;
    //         stack<int> st;
    // for (int i = 0; i < temperatures.size(); i++) {
    //     while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
    //         int topIndex = st.top();
    //         st.pop();
    //         temperatures[topIndex] = i - topIndex;
    //     }
    //     st.push(i);
    // }
    // while (!st.empty()) {
    //     int topIndex = st.top();
    //     st.pop();
    //     temperatures[topIndex] = 0; // Remaining elements in the stack have no warmer days
    // }
    // return temperatures;
                
        int n = temperatures.size();
        vector<int>nge(n, 0); // initially all 0, stores distance between their next greater element and current temperature
        stack<int>st{};
        
		// move from right to left
        for(int i = n-1; i>=0; --i){
            // pop until we find next greater element to the right
			// since we came from right stack will have element from right only
			// s.top() is the index of elements so we put that index inside temperatures vector to check
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
				
            // if stack not empty, then we have some next greater element, 
			// so we take distance between next greater and current temperature
			// as we are storing indexes in the stack
            if(!st.empty())
                nge[i] = st.top()-i; // distance between next greater and current
            
			// push the index of current temperature in the stack,
			// same as pushing current temperature in stack
            st.push(i);
        }
        return nge;

    }
};