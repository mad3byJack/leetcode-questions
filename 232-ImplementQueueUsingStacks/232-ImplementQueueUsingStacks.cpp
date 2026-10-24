// Last updated: 24/10/2026, 11:50:52 am
class MyQueue {
public:
    MyQueue() {
    }
    
    stack<int> m;
    stack<int> back;
    int size = 0;
    
    void push(int x) {
        m.push(x);
        size ++;
    }
    
    int pop() {
        for (int i = 1; i < size; i ++) {
            back.push(m.top());
            m.pop();
        }
        int temp = m.top();
        m.pop();
        for (int i = 1; i < size; i ++) {
            m.push(back.top());
            back.pop();
        }
        size --;
        return temp;
    }
    
    int peek() {
        for (int i = 1; i < size; i ++) {
            back.push(m.top());
            m.pop();
        }
        int temp = m.top();
        for (int i = 1; i < size; i ++) {
            m.push(back.top());
            back.pop();
        }
        return temp;
    }
    
    bool empty() {
        if (size == 0) return true;
        return false;
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