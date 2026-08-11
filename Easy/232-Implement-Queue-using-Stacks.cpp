class MyQueue {
private:

    stack<int> stackIn;
    stack<int> stackOut;
    

public:
    MyQueue() {

        
    }
    
    void push(int x) {    

        stackIn.push(x);    

    }
    
    int pop() {

        if(stackOut.empty()){
            while(!stackIn.empty()){
                stackOut.push(stackIn.top()); // Movemos los elementos de In a Out
                stackIn.pop();
            }
            int valor = stackOut.top(); // Guardamos el valor de la cima de Out y lo retornamos
            stackOut.pop();
            return valor;
        } else {
            int valor;
            valor = stackOut.top();
            stackOut.pop();
            return valor;
        }
        
    }

    int peek() {

        if(stackOut.empty()){
            while(!stackIn.empty()){
                stackOut.push(stackIn.top());
                stackIn.pop();
            }
            return stackOut.top();
        } else return stackOut.top();
    }
    
    bool empty() {
        return stackIn.empty() && stackOut.empty();
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
