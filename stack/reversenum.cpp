#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    int l=123;
    while(l!=0){
        int digit=l%10;
        st.push(digit);
        l/=10;
    }
    int reverse=0;
    int multiplier=1;
    int temp=0;
    while(!st.empty()){
        int digit=st.top();
        st.pop();
        temp=digit*multiplier;
        reverse=reverse+temp;
        multiplier=multiplier*10;
    }
    cout<<reverse<<endl;
}