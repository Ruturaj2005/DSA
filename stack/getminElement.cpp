class SpecialStack {
    stack<int> s;
    int mini;
    public:
    int push(int data) {
        if(s.empty()){
            s.push(data);
            mini=data;
        }
        else{
            if(data>mini){
                s.push(data);
            }
            else{
                s.push(2*data-mini);
                mini=data;
            }
        }
    }

    int pop() {
        if(s.empty()){
            return -1;
        }
        int curr=s.top();
        s.pop();
        if(curr>mini){
            return curr;
        }
        else{
            int preMin=mini;
            int val=2*mini-curr;
            mini=val;
            return preMin;
        }
    }

    int top() {
        if(s.empty())
            return -1;
        
        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    int getMin() {
       if(s.empty()){
           return -1;
       }

       return mini;
    }  
};