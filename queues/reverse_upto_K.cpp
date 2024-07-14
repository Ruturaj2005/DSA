#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    queue <int> q;
    stack<int> s;
    int k;
    cout<<"Enter the number of elements to be reversed"<<endl;
    cin>>k;
    int cnt=0;
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    while(cnt<k){
        int num=q.front();
        q.pop();
        s.push(num);
        cnt++;
    }
    while(!s.empty()){
        int num=s.top();
        s.pop();
        q.push(num);
    }
    int t=q.size()-k;
    while(t--){
        int val=q.front();
        q.pop();
        q.push(val);
    }
    while(!q.empty()){
        int num=q.front();
        q.pop();
        cout<<num<<" ";
    }
    

    return 0;
}