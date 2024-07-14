#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    stack<char> st;
    string s="abc";
    string r;
    for(int i=0;i<3;i++){
        char ch=s[i];
        st.push(ch);
    }
    for (int i = 0; i < s.length(); i++) {
        s[i] = st.top();
        st.pop();
    }
    cout<<s;
    return 0;
}