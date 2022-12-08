class MyQueue {
public:
    stack<int> st;
    stack<int> qt;
    MyQueue() {
    }
    
    void push(int x) {
       qt.push(x); 
       stack<int> tmp = qt;
       st= stack<int>();
       while(!tmp.empty()){
           st.push(tmp.top());
           tmp.pop();
       }
       
    }
    
    int pop() {
        int a= st.top();
        st.pop(); 
        stack<int> tmp = st;
        qt= stack<int>();
        while(!tmp.empty()){
           qt.push(tmp.top());
           tmp.pop();
       }
       return a;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return qt.size()==0? true: false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */