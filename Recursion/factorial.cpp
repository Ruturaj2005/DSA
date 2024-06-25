#include<iostream>
using namespace std;
int printrecursion(int n,int ans){
    if(n==0){
        return ans;
    }
    
    ans*=n;
    
    return printrecursion(n-1,ans);
    
}
int main(){
    int n;
    cin>>n;
    int ans=1;
    cout<<printrecursion(n,ans)<<endl;
}