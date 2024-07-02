void insertatbottom(stack<int> &stack,int n){
    if(stack.empty()){
        stack.push(n);
        return;
    }

    int num1=stack.top();
    stack.pop();

    insertatbottom(stack,n);
    stack.push(num1);
}
void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }

    int num=stack.top();
    stack.pop();

    reverseStack(stack);

    insertatbottom(stack,num);
}