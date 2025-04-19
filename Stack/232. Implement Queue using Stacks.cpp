// 232. Implement Queue using Stacks
// Conplexity: O(n) time for pop & top, O(1) for push & empty, O(n) space
// Notes:
// Follow up: Could be simpler

class MyQueue {
    public:
    
        stack<int> s1;
        stack<int> s2;
    
        MyQueue() {}
        
        void push(int x) {
            s1.push(x);
        }
        
        int pop() {
            while(!s1.empty()){
                int transfer = s1.top();
                s1.pop();
                s2.push(transfer);
            }
            int tmp = s2.top();
            s2.pop();
    
            while(!s2.empty()){
                int transfer = s2.top();
                s2.pop();
                s1.push(transfer);
            }
    
            return tmp;
        }
        
        int peek() {
            while(!s1.empty()){
                int transfer = s1.top();
                s1.pop();
                s2.push(transfer);
            }
            int tmp = s2.top();
    
            while(!s2.empty()){
                int transfer = s2.top();
                s2.pop();
                s1.push(transfer);
            }
    
            return tmp;
        }
        
        bool empty() {
            return s1.empty();
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