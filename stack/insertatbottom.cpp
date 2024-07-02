#include <iostream>
#include<stack>
using namespace std;
void place(stack<int>&s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    
    int num=s.top();
    s.pop();
    
    place(s,n);
    s.push(num);
    
    
}
void insertatbottom(stack<int>&s,int n){
    place(s,n);
}
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    int n=0;
    insertatbottom(s,n);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}