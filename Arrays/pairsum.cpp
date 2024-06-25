#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[5]={1,2,3,2,4};
    int ans=4;
    for(int i=0;i<5;i++){
        for(int j=4;j>i;j--){
            if(arr[i]+arr[j]==ans){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                arr[j]=INT_MIN;
            }
        }
    }
    return 0;
}