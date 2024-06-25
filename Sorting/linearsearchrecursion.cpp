#include<iostream>
using namespace std;
int linearsearch(int array[],int l,int n,int key){
    if(l==n){
        return -1;
    }
    else if(array[l]==key){
        return l;
    }
    return linearsearch(array,l+1,n,key);
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
    cout<<linearsearch(array,0,n,key);
}