#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int result=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            result=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return result;
}
int main(){
    int n=5;
    int arr[5]={1,4,4,4,4};
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key);
    
}