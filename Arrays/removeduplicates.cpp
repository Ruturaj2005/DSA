#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int newSize = n;
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--; // Reduce the size of the array
                j--; // Adjust index to recheck the current position
            }
        }
    }
    for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" ";
    }
    
}