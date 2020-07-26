stack<int>s;
stack<int>ms;
MinStack::MinStack() {
    while(!s.empty())
    {
        s.pop();
    }
    while(!ms.empty())
    {
        ms.pop();
    }
}

void MinStack::push(int x) {
    s.push(x);
    if(x<=ms.top())
    {
        ms.push(x);
    }
    else
    {
        ms.push(ms.top());
    }
}

void MinStack::pop() {
    if(!s.empty())
    {
        s.pop();
        ms.pop();
    }
}

int MinStack::top() {
    if(s.empty())
    {
        return -1;
    }
    return s.top();
}

int MinStack::getMin() {
    if(ms.empty())
    {
        return -1;
    }
    return ms.top();
}

