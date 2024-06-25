#include<iostream>
using namespace std;
void printrecursive(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    
    printrecursive(n-1);
}
int main(){
    int n;
    cin>>n;
    printrecursive(n);
}