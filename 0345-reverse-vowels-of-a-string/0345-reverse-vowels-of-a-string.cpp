class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        string res = "";
        string ans = "";
        for(auto i: s){
            if(i == 'a' || i=='e' || i=='i'|| i=='o'|| i=='u'|| i=='A'|| i=='E'|| i=='I'|| i=='O'|| i=='U')
            {st.push(i);res+='*';
            }
            else res+=i;
        }
        
        for(auto i: res){
            if(i=='*'){
                char k = st.top();
                st.pop();
                ans+=k;
            }else ans+=i;
        }
        return ans;
    }
};