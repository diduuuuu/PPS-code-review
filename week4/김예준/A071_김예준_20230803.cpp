class MyQueue {
public:
    stack<int> stk;

    MyQueue() {
    }
    
    //x를 push해주는 부분
    void push(int x) {
        stack<int> tmp;
        while(!stk.empty()){
            tmp.push(stk.top());
            stk.pop();
        }
        stk.push(x);
        while(!tmp.empty()){
            stk.push(tmp.top());
            tmp.pop();
        }
    }
    
    //하나를 pop해주는 부분
    int pop() {
        int tmp = stk.top();
        stk.pop();
        return tmp;
    }
    
    //가장 앞의 것을 가져옴
    int peek() {
        return stk.top();
    }
    
    // 비어있는지 확인
    bool empty() {
        return stk.empty();
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