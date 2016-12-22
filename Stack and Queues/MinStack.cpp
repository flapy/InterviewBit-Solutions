stack<int> s;
stack<int> minStack;
int mini=INT_MAX;
MinStack::MinStack() {
    stack<int> temp;
    s=temp;
    minStack=temp;
    mini=INT_MAX;
}

void MinStack::push(int x) {
    s.push(x);
    //mini=min(mini,x);
    if(!minStack.empty())
    {
        if(x<=minStack.top())
        {
            minStack.push(x);
        }
    }
    else
    {
        minStack.push(x);
    }
}

void MinStack::pop() {
    if(s.empty())
        return ;
    else
    {
        int ele=s.top();
        s.pop();
        if(ele==minStack.top())
            minStack.pop();
        if(!minStack.empty())
            mini=minStack.top();
        else
            mini=INT_MAX;
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
    if(minStack.empty())
        return -1;
    return minStack.top();
}

