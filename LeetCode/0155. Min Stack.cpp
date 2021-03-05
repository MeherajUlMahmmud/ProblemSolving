class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack;
    vector<int> mini;
    int minVal = INT_MAX;
    
    MinStack() {
        vector<int> stack;
    }
    
    void push(int x) {
        if(stack.size() == 0)
            minVal = INT_MAX;
        
        stack.push_back(x);
        minVal = min(minVal, x);
        mini.push_back(minVal);
    }
    
    void pop() {
        stack.pop_back();
        mini.pop_back();
        
        if(mini.size() != 0)
            minVal = mini.back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return mini.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */