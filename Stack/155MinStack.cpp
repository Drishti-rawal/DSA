class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> ori,m;
    MinStack() {
        
    }
    
    void push(int x) {
        if(ori.empty() || x<=m.top())
            m.push(x);
        ori.push(x);
    }
    
    void pop() {
        if(ori.top() == m.top())
            m.pop();
        ori.pop();
    }
    
    int top() {
        return ori.top();
    }
    
    int getMin() {
        return m.top();
    }
};