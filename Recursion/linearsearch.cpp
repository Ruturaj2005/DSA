#include<iostream>
#include<string>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true ;
    }
    return linearsearch(arr+1,size-1,key);
}
int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;
    int key;
    cin>>key;
    cout<<linearsearch(arr,size,key);
}