#include<iostream>
using namespace std;
int maxrecursion(int arr[],int n,int i,int result){
    if(i==n){
        return result;
    }
    
    if(arr[i]>result){
        result=arr[i];
    }
    
    return maxrecursion(arr,n,i+1,result);
}
int main(){
    int arr[6]={2,3,4,1,6,9};
    int n=6;
    int i=0;
    int result=arr[0];
    cout<<maxrecursion(arr,n,i,result)<<endl;
}