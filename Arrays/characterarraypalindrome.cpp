#include<iostream>
using namespace std;
int main(){
    char arr[6]="nitin";
    int n=5;
    bool check =true;
    for(int i=0;i<n;i++){
            if(arr[i] != arr[n - 1 - i]){
                check=false;
                break;
            }
    }
    if(check){
        cout<<"Palindrome";
    }
    else{
        "Not A Palindrome";
    }
}