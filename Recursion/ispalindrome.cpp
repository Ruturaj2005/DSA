#include <iostream>
#include<string>
using namespace std;
bool checkpalindrome(string str,int i){
    if( i >= str.length() / 2){
        return true;
    }
    if(str[i]!=str[str.length()-i-1]){
        return false;
    }
    else{
       return checkpalindrome(str,i+1);
    }
    
}

int main() {
   string str="abba";
   cout<<checkpalindrome(str,0);
   if(checkpalindrome){
       cout<<"palindrome";
   }
   else{
       cout<<"Not a Palindrome";
   }
}