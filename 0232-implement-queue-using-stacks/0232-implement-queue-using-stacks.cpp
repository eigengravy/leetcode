class MyQueue {
public:
    stack <int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        int size = s.size();
        stack <int> _s;
        while(!s.empty()){
            _s.push(s.top());
            s.pop();
        }
        s.push(x);
        while(!_s.empty()){
            s.push(_s.top());
            _s.pop();
        }
    }
    
    int pop() {
        int temp = s.top();
        s.pop();
        return temp;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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