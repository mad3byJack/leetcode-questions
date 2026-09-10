// Last updated: 10/09/2026, 1:24:58 pm
1class MyQueue {
2public:
3    MyQueue() {
4        
5    }
6
7    vector<int> q;
8    
9    void push(int x) {
10        q.push_back(x);
11    }
12    
13    int pop() {
14        int popped = q[0];
15        q.erase(q.begin());
16        return popped;
17    }
18    
19    int peek() {
20        return q[0];
21    }
22    
23    bool empty() {
24        if (q.size() == 0) {
25            return true;
26        }
27        return false;
28    }
29};
30
31/**
32 * Your MyQueue object will be instantiated and called as such:
33 * MyQueue* obj = new MyQueue();
34 * obj->push(x);
35 * int param_2 = obj->pop();
36 * int param_3 = obj->peek();
37 * bool param_4 = obj->empty();
38 */