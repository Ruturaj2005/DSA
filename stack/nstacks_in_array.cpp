#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class mystack{
    public:
        int *arr;
        int *top;
        int *next;
        int freespot;
        int n,s;
        void Nstack(int N,int S){
            n=N;
            s=S;
            arr=new int[s];
            top = new int[n];
            next = new int[s];
        
            for(int i=0;i<n;i++){
            top[i]=-1;
            }
            for(int i=0;i<s;i++){
            next[i]=i+1;
            }
        
            next[s-1]=-1;
            freespot=0;
        
        }
    
        bool push(int x,int m ){
            if(freespot==-1){
                return false;
            }
        
            int index=freespot;
        
            freespot=next[index];
        
            arr[index]=x;
        
            next[index]=top[m-1];
            top[m-1]=index;
        
            return true;
        
        }
    
        int pop(int m){
            if(top[m-1] == -1) {
                return -1;
            }
        
            int index= top[m-1];
        
            top[m-1] = next[index];
        
            next[index] = freespot;
        
            freespot = index;
        
            return arr[index];
        }
        
    
    
};
int main() {
    mystack s;
    s.Nstack(2,6);
    s.push(2,1);
    s.push(3,1);
    s.push(4,1);
    s.push(5,2);
    cout<<s.pop(1);
    
    return 0;
}