#include<iostream>
#include<string>
using namespace std;
void subsets(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    string ros=s.substr(1);
    
    subsets(ros,ans);
    subsets(ros,ans+ch);
}
int main(){
    string s="abc";
    subsets(s,"");
}