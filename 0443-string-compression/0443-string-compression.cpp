class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> st;
        st.push_back(chars[0]);
        int count =1;
        for(int i=1; i<chars.size(); i++){
            if(chars[i-1]==chars[i] ){
                count++;
                if(i==chars.size()-1){
                    if(count!=1){
                    for(char digit : to_string(count)) 
                    st.push_back(digit);
                }
                }
                continue;
            }else{
                if(count!=1){
                    for(char digit : to_string(count)) 
                    st.push_back(digit);
                }

                
                count =1;
                st.push_back(chars[i]);
            }
        }
        // if(count!=1)st.push_back('0'+count);
        for(int i=0; i<st.size() && i<chars.size(); i++){
            chars[i]=st[i];
        }
        return st.size();
    }
};