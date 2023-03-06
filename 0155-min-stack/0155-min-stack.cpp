class MinStack {
    vector<pair<int,int>> stack;
public:
    MinStack() {
        stack= vector<pair<int,int>> ();
    }
    
    void push(int val) {
        if(!stack.size()){
            stack.push_back({val,val});
        }
        else stack.push_back({val, min(val, stack.back().second)});
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        auto x= stack.back();
        return x.first;
    }
    
    int getMin() {
        auto x= stack.back();
        return x.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */