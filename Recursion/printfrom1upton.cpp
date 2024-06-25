#include<iostream>
using namespace std;
void printrecursive(int current,int n){
    if(current>n){
        return;
    }
    cout<<current<<" ";
    
    printrecursive(current+1,n);
}
int main(){
    int n;
    int current=1;
    cin>>n;
    printrecursive(current,n);
}