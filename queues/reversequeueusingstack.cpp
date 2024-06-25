#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    stack<int>st1;
    queue<int>q1;
    for(int i=0;i<n;i++){
        q1.push(arr[i]);
    }
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        st1.push(q1.front());
        q1.pop();
    }
    cout<<"\n";
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        q1.push(st1.top());
        st1.pop();
    }
    cout<<"\n";
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
}