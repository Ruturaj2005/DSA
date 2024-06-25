// Problem statement
//You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,2};
    int ans=0;
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<5;i++){
        ans=ans^i;
    }
    cout<<"Duplicate Element is :"<<ans<<endl;

    return 0;
}