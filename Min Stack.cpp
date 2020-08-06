class MinStack {
public:
    stack<int> st;
    multiset<int> s;
    MinStack() {
    }
    void push(int x) {
        st.push(x);
        if(x<=getMin() || s.empty()) s.insert(x);
    }
    void pop() {
        if(st.top()==*s.begin()) s.erase(s.begin());
        st.pop();
    }
    int top() {
        return st.top();
    }
    int getMin() {
        return *s.begin();
    }
};
