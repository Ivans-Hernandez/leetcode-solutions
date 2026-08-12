class MyStack {
private:
    queue<int> queueIn;
    queue<int> queueOut;

public:
    MyStack() {
    }

    void push(int x) {
        queueOut.push(x);

        while (!queueIn.empty()) {
            queueOut.push(queueIn.front());
            queueIn.pop();
        }

        swap(queueIn, queueOut);
    }

    int pop() {
        int value = queueIn.front();
        queueIn.pop();
        return value;
    }

    int top() {
        return queueIn.front();
    }

    bool empty() {
        return queueIn.empty();
    }
};
