#include<iostream>
#include<string>
using namespace std;
int sum(int arr[],int size,int total){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    total=arr[0]+sum(arr+1,size-1,total);
    return total;
    
}
int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;
    int total=0;
    cout<<sum(arr,size,total);
}