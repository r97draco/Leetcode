class MyQueue {
public:
    stack<int> in;
    stack<int> out;
    MyQueue() {
    }
    
    void push(int x) {
       in.push(x); 
       // stack<int> tmp = out;
       // in= stack<int>();
       // while(!tmp.empty()){
       //     in.push(tmp.top());
       //     tmp.pop();
       // }
       
    }
    
    int pop() {
        int a= peek();
        out.pop(); 
       //  stack<int> tmp = in;
       //  out= stack<int>();
       //  while(!tmp.empty()){
       //     out.push(tmp.top());
       //     tmp.pop();
       // }
       return a;
    }
    
    int peek() {
        if(out.empty()){
            while(in.size()){
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    bool empty() {
        return in.size()==0 && out.size()==0;
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