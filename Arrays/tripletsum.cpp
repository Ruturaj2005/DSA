#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[5]={1,2,3,2,4};
    int ans=7;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                if(arr[i]+arr[j]+arr[k]==ans)
                {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                arr[k]=INT_MIN;
                }
            }
                
            
        }
    }
    return 0;
}