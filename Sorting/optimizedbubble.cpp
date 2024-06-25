#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5-1;i++){
        bool flag=true;
        for(int j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag =false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}