class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int x,y;
        
        for(auto i:tokens){
           
                if (i=="*"){
                   x = st.top(); st.pop();
                   y = st.top(); st.pop();
                    int r=x*y;
                    st.push(r);
                }
                else if (i=="-"){
                   x = st.top(); st.pop();
                   y = st.top(); st.pop();
                    int r=y-x;
                    st.push(r);
                }
                else if (i=="+"){
                   x = st.top(); st.pop();
                   y = st.top(); st.pop();
                    int r=x+y;
                    st.push(r);
                }
                else if (i=="/"){
                   x = st.top(); st.pop();
                   y = st.top(); st.pop();
                    int r=y/x;
                    st.push(r);
                }
                else{
                   int z = stoi(i);
                    cout<<z<<" ";
                   st.push(z);
                }
        }
        
    return st.top();   
    }
};