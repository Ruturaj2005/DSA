#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<char>st1;
   string s="(()";
   for(char c:s){
       if(!st1.empty()  &&  st1.top()!=c)
       {
           st1.pop();
       }
       else{
           st1.push(c);
       }
   }
   if(st1.empty()){
       cout<<"Balanced";
   }
   else{
       cout<<"Unbalanced";
   }
   
}