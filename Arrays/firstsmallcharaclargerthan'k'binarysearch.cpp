#include<iostream>
using namespace std;
char binarysearch(char arr[],int n,char key){
    int s=0;
    int e=n-1;
    int result=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            result=arr[mid];
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return result;
}
int main(){
    char arr[5]={'a','b','c','d','i'};
    int n=5;
    char key;
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
}