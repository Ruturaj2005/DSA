#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int n;
    cout<<"\n";
    cout<<"Enter the target value"<<endl;
    cin>>n;
    bool found=false;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==n){
                cout << "Index values are: [" << i << ", " << j << "]" << endl;
                found =true;
            }
        }
    }
    if(!found){
        cout<<"Index not found"<<endl;
    }
    delete[] arr;
    return 0;
}