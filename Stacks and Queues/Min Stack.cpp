vector<int> mystack;
vector<int> mini;

MinStack::MinStack() {
    mystack.clear();
    mini.clear();
}

void MinStack::push(int x) {
    mystack.push_back(x);
    if(mystack.size()==1)
       {
           mini.push_back(x);
       }
    else
      {
          mini.push_back( min( x , mini[ mini.size()-1 ] ) );
      }
}

void MinStack::pop() {
    if(mystack.size()!=0)
    {
        mystack.pop_back();
        mini.pop_back();
    }
}

int MinStack::top() {
    if(mystack.size()==0)
        return -1;
    else
        return mystack[mystack.size()-1];
}

int MinStack::getMin() {
    if(mystack.size()==0)
        return -1;
    else
        return mini[ mini.size()-1 ];
}

