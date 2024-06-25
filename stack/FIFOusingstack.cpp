#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    stack<int>st1;
    stack<int>st2;
    for(int i=0;i<n;i++){
        st1.push(arr[i]);
    }
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st2.push(st1.top());
        st1.pop();
    }
    cout<<"\n";
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
}