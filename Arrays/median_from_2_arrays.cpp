#include <iostream>
using namespace std;
int main() {
    int size1;
    cout<<"Enter the size of 1st array"<<endl;
    cin>>size1;
    int *arr=new int[size1];
    int size2;
    cout<<"Enter the size of 2nd array"<<endl;
    cin>>size2;
    int *brr=new int[size2];
    for(int i=0;i<size1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size2;i++){
        cin>>brr[i];
    }
    for(int i=0;i<size2;i++){
        cout<<brr[i]<<" ";
    }
    cout<<"\n";
    int size=size1+size2;
    int merged_arr[size];
    int i=0;
    int j=0;
    int k=0;
    while(i<size1){
        merged_arr[k++]=arr[i++];
    }
    while(j<size2){
        merged_arr[k++]=brr[j++];
    }
    for(int i=0;i<size;i++){
        cout<<merged_arr[i]<<" ";
    }
    cout<<"\n";
    if(size%2==0){
        int med1=(0+size-1)/2;
        int median=med1+(med1+1);
        cout<<"The median element is: "<<merged_arr[median];
    }
    else{
        int med=0+(size-1)/2;
        cout<<"The median element is: "<<merged_arr[med];
    }
    delete[] brr;
    delete[] arr;
    return 0;
}