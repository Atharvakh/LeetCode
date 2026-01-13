class MyQueue {
private: stack <int>stk1,stk2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        int n1 = stk1.size();
        while(n1--){
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk1.push(x);
        int n2 = stk2.size();
        while(n2--){
            stk1.push(stk2.top());
            stk2.pop();
        }
    }
    
    int pop() {
        int elem = stk1.top();
        stk1.pop();
        return elem;
    }
    
    int peek() {
        return stk1.top();
    }
    
    bool empty() {
        return stk1.empty();
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