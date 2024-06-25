#include<iostream>
using namespace std;
int binarysearch(int array[],int n,int l,int r,int key){
    int mid=(l+r)/2;
    if(l<=r){
        if(array[mid]==key){
        return mid;
    }
    else if(array[mid]>key){
        return binarysearch(array,n,l,mid-1,key);
    }
    else{
         return binarysearch(array,n,mid+1,r,key);
    }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
    cout<<binarysearch(array,n,0,n-1,key);
}