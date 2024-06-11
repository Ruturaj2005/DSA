#include<iostream>
using namespace std;
int main(){
   int m,n;
   cin>>m>>n;
   int arr[m][n];
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cin>>arr[i][j];
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
   }
   int p,q;
   cin>>p>>q;
   int brr[p][q];
   for(int i=0;i<p;i++){
       for(int j=0;j<q;j++){
           cin>>brr[i][j];
       }
   }
   for(int i=0;i<p;i++){
       for(int j=0;j<q;j++){
           cout<<brr[i][j]<<" ";
       }
       cout<<"\n";
   }
   int sum[m][n];
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           sum[i][j]=arr[i][j]+brr[i][j];
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cout<<sum[i][j]<<" ";
       }
       cout<<"\n";
   }
}