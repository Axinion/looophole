// SOlution 1 -> using 2 stacks

class MinStack {
    stack<int> stac;
    stack<int> minStac;
public:
    MinStack() {
    }
    
    void push(int val) {
        stac.push(val);
        val = min(val, minStac.empty()? val: minStac.top());
        minStac.push(val);
    }
    
    void pop() {
        stac.pop();
        minStac.pop();
    }
    
    int top() {
        return stac.top();
    }
    
    int getMin() {
        return minStac.top();
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


// Solution 2 -> storing it in a variable

class MinStack {
private:
    long min;
    std::stack<long> stack;

public:
    MinStack() {}

    void push(int val) {
        if (stack.empty()) {
            stack.push(0);
            min = val;
        } else {
            stack.push(val - min);
            if (val < min) min = val;
        }
    }

    void pop() {
        if (stack.empty()) return;

        long pop = stack.top();
        stack.pop();

        if (pop < 0) min = min - pop;
    }

    int top() {
        long top = stack.top();
        return (top > 0) ? (top + min) : (int)min;
    }

    int getMin() {
        return (int)min;
    }
};
