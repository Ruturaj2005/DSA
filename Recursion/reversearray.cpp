#include<iostream>
using namespace std;
void printrecursive(int arr[],int n,int i){
    if(i<0){
        return;
    }
    
    cout<<arr[i]<<" ";
    
    printrecursive(arr,n,i-1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int i=n-1;
    printrecursive(arr,n,i);
}