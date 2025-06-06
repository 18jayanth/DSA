class MinStack {
    private:
    stack<long long>st;
    long long mini;
public:

    MinStack() {
      //intialiaze the stack with empty, and mini to longmaxi
        while(!st.empty())
        st.pop();
        mini= LLONG_MAX;
        
    }
    
    void push(int val) {
      //convert int to long
      //if stack is empty means its the first element push it into stack and update mini to its value
         long long value = val;
        if (st.empty()) {
            st.push(value);
            mini = value;
        } 
          //if value to be inerted is less than mini then we should not push value directly becuase if in case we need to pop it 
          //we loose track of previous minimum we need to know somehow previous minimum too 
          // so store 2*value-previousminimum into stack and update mini to value
          //why cant we do reverse ? if we store value to stack and update the mini to differnce , then we dont know whether this is a normal number which dont affect the minimum or else
          //because its alwsys stack[top]>mini so better do reverse
        else if  (value <=mini) {
                // encode and push
           /*
          2LL ensures constant promotion is safe even if one operand is accidentally int

          It's a defensive practice in competitive coding and low-level logic
            int value = -3;
long long encoded = 2 * value - mini;     // might overflow
long long encoded = 2LL * value - mini;   // safe
long long encoded = 2 * value * 1LL - mini; // also safe
            mini = 2LL * mini - top;
            */
                st.push(2LL * value - mini);
                mini = value;
            } 

        else {
          //if value is graeter than mini push it into stack
                st.push(value);
            }
        }
        
    
    
    void pop() {
        
        if (st.empty()) return;
        long long top = st.top();
        st.pop();
  //if top is less than mini then update the minimum to previous minimum 
        if (top <= mini) {
            // decode previous minimum
           mini = 2LL * mini - top;
         
        }
    

    }
    
    int top() {
        
          if (st.empty()) return -1;
        long long top = st.top();
        if (top < mini) {
            // this is an encoded value, actual top is mini
            return (int)mini;
        } 
        else {
            return (int)top;
        }
    }
    
    
    int getMin() {
         return (int)mini;
        
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
