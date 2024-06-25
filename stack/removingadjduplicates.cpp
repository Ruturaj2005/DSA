#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<char>st1;
   stack<char>st2;
   string s="abbaca";
   for(char c:s){
       if(!st1.empty() && st1.top()==c){
           st1.pop();
       }
       else{
           st1.push(c);
       }
   }
   string ans="";
   char c;
   while(!st1.empty()){
       c=st1.top();
       st1.pop();
       st2.push(c);
   }
   int a=st2.size();
   while(!st2.empty()){
       ans+=st2.top();
       st2.pop();
   }
   cout<<ans<<endl;
    
}