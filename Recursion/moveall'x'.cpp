#include<iostream>
#include<string>
using namespace std;
string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    
    char ch=s[0];
    string ans= moveallx(s.substr(1));
    
    if(ch=='x'){
        return (ans+ch);
    }
    else{
        return (ch+ans);
    }
}
int main(){
    string s="axxaxbxxc";
    cout<<moveallx(s);
}