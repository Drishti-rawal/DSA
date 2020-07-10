class MinStack {
public:
    /** initialize your data structure here. */
    stack<int_fast64_t> st;
    int_fast64_t mini;
    MinStack() {
        
    }
    
    void push(int x) {
        if(st.empty())
        {
            st.push(x);
            mini=x;
        }
        else
        {
            if(x<mini)
            {
                st.push(2*x-(mini));
                mini=x;
            }
            else
                st.push(x);
        }
    }
    
    void pop() {
        if(st.top()>mini)
            st.pop();
        else
        {
            mini=2*mini-st.top();
            st.pop();
        }
    }
    
    int top() {
        if(st.top()>=mini)
            return st.top();
        else
        {
            return (mini=st.top())/2;
        }
    }
    
    int getMin() {
        return mini;
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