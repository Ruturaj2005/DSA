#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string s1="ruturaj";
  for(int i=0;i<s1.length();i++){
      if(s1[i]>= 'a' && s1[i]<= 'z'){
          s1[i]-=32;
      }
  }
  cout<<s1<<endl;
  for(int i=0;i<s1.length();i++){
      if(s1[i]>= 'A' && s1[i]<= 'Z'){
          s1[i]+=32;
      }
  }
  cout<<s1<<endl;
}