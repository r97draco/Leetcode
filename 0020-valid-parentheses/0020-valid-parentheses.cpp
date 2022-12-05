class Solution {
public:
    bool isValid(string s) {
        bool res=true;
        stack<char> st;
        for(auto i: s){
            if(i=='[' || i=='{' || i=='('){
                st.push(i);
            }
            else{
                if(st.empty()){
                return false;
                }
                char top= st.top();
                switch(top){
                    case '{' : if(i == '}')
                        st.pop(); else st.push(i); break;
                    case '(' : if(i == ')')
                        st.pop(); else st.push(i); break;
                    case '[' : if(i == ']')
                        st.pop(); else st.push(i); break;
                    default: st.push(i);
                }
            }
        }
        
        return st.empty()?true:false;
    }
};